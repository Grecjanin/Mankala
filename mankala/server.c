#include "GameLogic.h"
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <unistd.h>


#define SERVER_PORT 1234
#define QUEUE_SIZE 10
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
	int temp[14];
	for(int i=0;i<14;i++)
	{
		temp[i] = htonl(gra.board[i]);
	}
	
	write(socket , temp , sizeof(temp));
	
}

int main(int argc, char* argv[])
{
	struct gameState gra;
	int server_socket_descriptor;
   	int connection_socket_descriptor;
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
   initGame(&gra);
   foo(gra);

   
   connection_socket_descriptor = accept(server_socket_descriptor, NULL, NULL);
   if (connection_socket_descriptor < 0)
   {
      fprintf(stderr, "%s: Błąd przy próbie utworzenia gniazda dla połączenia.\n", argv[0]);
      exit(1);
   }
   
   int move;
   sendGameState(gra , connection_socket_descriptor); 

   while(read(connection_socket_descriptor, &move, sizeof(int))>0){
   	
   	
	move = ntohl(move); 
	printf("Odczytano: %d\n",move);
	makeMove(&gra , move);
	nextPlaye(&gra);
	foo(gra);
	sendGameState(gra , connection_socket_descriptor); 
	 	
   }

   close(server_socket_descriptor);
   return(0);
	return 0;
}
