#include "GameLogic.h"
#include <stdio.h>
#include <string.h>
void foo(struct gameState gra)
{
	printf("___________________________________________\n\t");
	for(int i=5;i>=0;i--)printf("%d\t",gra.board[i]);
	printf("\n%d\t\t\t\t\t\t\t%d\n\t",gra.board[6],gra.board[13]);
	for(int i=7;i<13;i++)printf("%d\t",gra.board[i]);
	printf("\n");
}

int main(void)
{
	struct gameState gra;
	initGame(&gra);
	foo(gra);
	makeMove(&gra,2);
	foo(gra);
	memset(gra.board,0,sizeof(gra.board));
	foo(gra);
	gra.board[0]=1;
	gra.board[11]=2;
	makeMove(&gra,0);
	checkIfEnd(&gra);
	foo(gra);
	return 0;
}
