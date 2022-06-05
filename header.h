#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>

typedef struct {
	int orientation;
	int piecenum;
	int piecet[4][4];
} piece;

typedef struct{
	int score;
	char name[20]; 
} scoring;

piece createpiece(int num, int o);
void writeFile( scoring tab[], int size);
scoring* readfile(int* pnmbr);
void printboard(int board[11][12],int pts);
int linefull(int y, int board[11][12]);
int awardpts(int lines, int pts, int dif);
void fall(int board[11][12],int x,int ldrop);
int lineclear(int board[11][12], int pts, int dif);
void printpiece(piece x);
int selectpiece ();
int gameover(int board[11][12]);
int piecescollision(int board[11][12]);
