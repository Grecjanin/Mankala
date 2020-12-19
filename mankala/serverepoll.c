#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netdb.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include <sys/epoll.h>
#include "GameLogic.h"

#define SERVER_PORT 1234
#define QUEUE_SIZE 5

//struktura zawierająca dane, które zostaną przekazane do wątku
struct thread_data_t
{
//TODO
	int epoll_fd; 
};

struct epoll_event_data
{
	int my_fd;
	int enemy_fd;
	int player;
	struct gameState * gra;
};

void foo(struct gameState gra)
{
	printf("___________________________________________\n\t");
	for(int i=5;i>=0;i--)printf("%d\t",gra.board[i]);
	printf("\n%d\t\t\t\t\t\t\t%d\n\t",gra.board[6],gra.board[13]);
	for(int i=7;i<13;i++)printf("%d\t",gra.board[i]);
	printf("\n");
}
void sendGameState(struct gameState gra , int socket)
{
	int pom = 2;
	pom = htonl(pom);
	write(socket , &pom , sizeof(int));
	int temp[14];
	for(int i=0;i<14;i++)
	{
		temp[i] = htonl(gra.board[i]);
	}
	
	write(socket , temp , sizeof(temp));
	
}

void sendInitInfo(char * name,int player , int socket)
{
	int pom[] ={1 ,player, strlen(name)};
	for(int i=0;i<3;i++)pom[i] = htonl(pom[i]);
	write(socket , pom , sizeof(pom));
	write(socket , name , strlen(name));
	
}

//funkcja opisującą zachowanie wątku - musi przyjmować argument typu (void *) i zwracać (void *)
void *ThreadBehavior(void *t_data)
{
    pthread_detach(pthread_self());
    struct thread_data_t *th_data = (struct thread_data_t*)t_data;
	 struct epoll_event ev;
    //TODO
    for(;;) {
        epoll_wait(th_data->epoll_fd, &ev, 1, -1); //1 = maksymalnie jedno zdarzenie, -1 = bez timeout
        int move;
        struct epoll_event_data * epollData = ev.data.ptr;
        int readBytes = read(epollData->my_fd, &move, sizeof(int));
        if ( readBytes>0 && ev.events==EPOLLIN && epollData->gra->currentPlayer == epollData->player ) {
        		move = ntohl(move); 
				printf("Odczytano: %d\n",move);
				makeMove(epollData->gra , move);
				nextPlaye(epollData->gra);
				foo(*(epollData->gra));
				sendGameState(*(epollData->gra) , epollData->my_fd);
				sendGameState(*(epollData->gra) , epollData->enemy_fd);
        }
    }

    pthread_exit(NULL);
}


int main(int argc, char* argv[])
{
   int server_socket_descriptor;
   int connection_socket_descriptor;
   int epoll_fd;
   
   int bind_result;
   int listen_result;
   char reuse_addr_val = 1;
   struct sockaddr_in server_address;

   //inicjalizacja gniazda serwera
   
   memset(&server_address, 0, sizeof(struct sockaddr));
   server_address.sin_family = AF_INET;
   server_address.sin_addr.s_addr = htonl(INADDR_ANY);
   server_address.sin_port = htons(SERVER_PORT);

   server_socket_descriptor = socket(AF_INET, SOCK_STREAM, 0);
   if (server_socket_descriptor < 0)
   {
       fprintf(stderr, "%s: Błąd przy próbie utworzenia gniazda..\n", argv[0]);
       exit(1);
   }
   setsockopt(server_socket_descriptor, SOL_SOCKET, SO_REUSEADDR, (char*)&reuse_addr_val, sizeof(reuse_addr_val));

   bind_result = bind(server_socket_descriptor, (struct sockaddr*)&server_address, sizeof(struct sockaddr));
   if (bind_result < 0)
   {
       fprintf(stderr, "%s: Błąd przy próbie dowiązania adresu IP i numeru portu do gniazda.\n", argv[0]);
       exit(1);
   }

   listen_result = listen(server_socket_descriptor, QUEUE_SIZE);
   if (listen_result < 0) {
       fprintf(stderr, "%s: Błąd przy próbie ustawienia wielkości kolejki.\n", argv[0]);
       exit(1);
   }
	
   //TODO stworzyć instancję epoll przez epoll_create1(0);
	epoll_fd = epoll_create1(0);
	if(epoll_fd == -1)
  {
    fprintf(stderr, "Failed to create epoll file descriptor\n");
    exit(-1);
  }
	
		

   int create_result = 0;
   pthread_t thread1;
   struct thread_data_t thread1_data;
   thread1_data.epoll_fd = epoll_fd;
   create_result = pthread_create(&thread1, NULL, ThreadBehavior, &thread1_data);
   if (create_result){
      printf("Błąd przy próbie utworzenia wątku, kod błędu: %d\n", create_result);
      exit(-1);
   }

   while(1)
   {
       connection_socket_descriptor = accept(server_socket_descriptor, NULL, NULL);
       if (connection_socket_descriptor < 0)
       {
           fprintf(stderr, "%s: Błąd przy próbie utworzenia gniazda dla połączenia.\n", argv[0]);
           exit(1);
       }
       printf("Pierwsze polaczenie\n");
       struct epoll_event *ev1= (struct epoll_event *)malloc(sizeof(struct epoll_event));
       ev1->events = EPOLLIN;
       struct epoll_event_data epollDataFirstPlayer , epollDataSecondPlayer;
       epollDataFirstPlayer.my_fd = connection_socket_descriptor;
       epollDataFirstPlayer.gra = (struct gameState *)malloc(sizeof(struct gameState));
       ev1->data.ptr = &epollDataFirstPlayer;
       
       connection_socket_descriptor = accept(server_socket_descriptor, NULL, NULL);
       if (connection_socket_descriptor < 0)
       {
           fprintf(stderr, "%s: Błąd przy próbie utworzenia gniazda dla połączenia.\n", argv[0]);
           exit(1);
       }
       printf("Drugie polaczenie\n");
       struct epoll_event *ev2= (struct epoll_event *)malloc(sizeof(struct epoll_event));
       ev2->events = EPOLLIN;
       epollDataSecondPlayer.my_fd = connection_socket_descriptor;
       epollDataSecondPlayer.enemy_fd = epollDataFirstPlayer.my_fd;
       epollDataFirstPlayer.enemy_fd = epollDataSecondPlayer.my_fd;
       
       epollDataFirstPlayer.player = rand()%2;
       epollDataSecondPlayer.player = (epollDataFirstPlayer.player + 1)%2;
       
       epollDataSecondPlayer.gra = epollDataFirstPlayer.gra;
       initGame(epollDataFirstPlayer.gra);
       foo(*(epollDataFirstPlayer.gra));
       
       ev2->data.ptr = &epollDataSecondPlayer;
       
       char buf[100];
       int readBytes = read(epollDataFirstPlayer.my_fd, buf, sizeof(buf));
       buf[readBytes]=0;
       sendInitInfo(buf ,epollDataSecondPlayer.player, epollDataSecondPlayer.my_fd);
       printf("Nazwa pierwszego gracza: %s, dlugość: %d\n",buf , readBytes);
       
       readBytes = read(epollDataSecondPlayer.my_fd, buf, sizeof(buf));
       buf[readBytes]=0;
       sendInitInfo(buf ,epollDataFirstPlayer.player, epollDataFirstPlayer.my_fd);
       printf("Nazwa drugiego gracza: %s, dlugość: %d\n",buf , readBytes);
       
       sendGameState(*(epollDataFirstPlayer.gra) , epollDataFirstPlayer.my_fd);
       sendGameState(*(epollDataSecondPlayer.gra) , epollDataSecondPlayer.my_fd); 
       printf("Wysłano grę\n");   
       if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, epollDataFirstPlayer.my_fd, ev1) == -1) {
         	perror("epoll_ctl: connection_socket_descriptor");
         	exit(EXIT_FAILURE);
       }
       if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, epollDataSecondPlayer.my_fd, ev2) == -1) {
         	perror("epoll_ctl: connection_socket_descriptor");
         	exit(EXIT_FAILURE);
       }


	//TODO dodać deskryptor połączenia do zbioru obserwowanego przez epoll
   }
   
   
	close(epoll_fd);
   close(server_socket_descriptor);
   return(0);
}