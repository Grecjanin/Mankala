#include "GameLogic.h"



void initGame(struct gameState * game)
{
	for(int i=0;i<6;i++)
	{
		game->board[i]=4;
		game->board[7+i]=4;
	}
	game->board[6]=0;
	game->board[13]=0;
	game->currentPlayer=0;
}

int checkIfEnd(struct gameState * game)//i przesuwa nie zdobyte kamienie do odpowiedniego domu
{
	int isEnd=1;
	for(int i=0;i<6;i++)
	{
		if(game->board[i]!=0)
		{
			isEnd=0;
			break;
		}
	}
	if(isEnd)
	{
		for(int i=7;i<13;i++)
		{
			game->board[13]+=game->board[i];
			game->board[i]=0;
		}
		return 1;
		
	}
	isEnd=1;
	for(int i=7;i<13;i++)
	{
		if(game->board[i]!=0)
		{
			isEnd=0;
			break;
		}
	}
	if(isEnd)
	{
		for(int i=0;i<6;i++)
		{
			game->board[6]+=game->board[i];
			game->board[i]=0;
		}
		return 1;
		
	}
	return 0;//nie ma konca
}

int getWinner(struct gameState * game)
{
	if(game->board[6]>game->board[13])return 0;
	if(game->board[6]<game->board[13])return 1;
	return -1;//remis
}

//move - z którego pola wykonywany jest ruch, dla obu graczy od 0 do 5, gdzie 0 to pole najdalej od domu i 5 najbliżej domu
int makeMove(struct gameState * game, int move)
{
	int stones = game->board[game->currentPlayer*7 + move];
	if(stones==0)return -1;//niepoprawny ruch
	int field = game->currentPlayer*7 + move;
	game->board[game->currentPlayer*7 + move]=0;
	while(stones >0)
	{
		field = (field+1)%14;
		if(field != game->currentPlayer*7 + move)
		{
			game->board[field]++;
			stones--;
		}
		
	}
	if(game->board[field]==1)
		if(field >=game->currentPlayer*7 && field < game->currentPlayer*7 +6)
		{
			
			int fieldTaken = (2*(game->currentPlayer*7 + 6 - field)+field)%14;
			game->board[game->currentPlayer*7+6] += game->board[fieldTaken];
			game->board[fieldTaken]=0;
		}
	return 0;//poprawny ruch
}
