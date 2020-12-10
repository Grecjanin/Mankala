#ifndef GameLogic
#define GameLogic
struct gameState{
	int board[14];
	//board[0-5] - pola gracza 0
	//board[6] - dom gracza 0
	//board[7-12] - pola gracza 1
	//board[13] - dom gracza 1
	int currentPlayer;//0 albo 1
};
void initGame(struct gameState * game);
int checkIfEnd(struct gameState * game);
int getWinner(struct gameState * game);
int makeMove(struct gameState * game, int move);
void nextPlaye(struct gameState * game);
#endif
