#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
	int orientation;
	int piecenum;
	int piecet[4][4];
	 
} piece;

piece createpiece(){
	piece x;
	srand(time(NULL));
	x.piecenum = rand()%7;
	x.orientation = rand()%4;
	memset(x.piecet, '0', 16);
	if (x.piecenum == 1 && x.orientation == 1){ // O
		x.piecet[0][0] = 1;
		x.piecet[0][1] = 1;
		x.piecet[1][0] = 1;
		x.piecet[1][1] = 1;
	}
	if (x.piecenum == 1 && x.orientation == 2){
		x.piecet[0][0] = 1;
		x.piecet[0][1] = 1;
		x.piecet[1][0] = 1;
		x.piecet[1][1] = 1;
	}	
	if (x.piecenum == 1 && x.orientation == 3){
		x.piecet[0][0] = 1;
		x.piecet[0][1] = 1;
		x.piecet[1][0] = 1;
		x.piecet[1][1] = 1;	
	}
	if (x.piecenum == 1 && x.orientation == 4){
		x.piecet[0][0] = 1;
		x.piecet[0][1] = 1;
		x.piecet[1][0] = 1;
		x.piecet[1][1] = 1;
	}
	if (x.piecenum == 2 && x.orientation == 1){ // I
		x.piecet[0][0] = 1;
		x.piecet[0][1] = 1;
		x.piecet[0][2] = 1;
		x.piecet[0][3] = 1;	
	}
	if (x.piecenum == 2 && x.orientation == 2){
		x.piecet[0][0] = 1;
		x.piecet[1][0] = 1;
		x.piecet[2][0] = 1;
		x.piecet[3][0] = 1;
	}	
	if (x.piecenum == 2 && x.orientation == 3){
		x.piecet[0][0] = 1;
		x.piecet[0][1] = 1;
		x.piecet[0][2] = 1;
		x.piecet[0][3] = 1;
	}	
	if (x.piecenum == 2 && x.orientation == 4){
		x.piecet[0][0] = 1;
		x.piecet[1][0] = 1;
		x.piecet[2][0] = 1;
		x.piecet[3][0] = 1;
	}
	if (x.piecenum == 3 && x.orientation == 1){ // S
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[2][2] = 1;
		x.piecet[3][2] = 1;
	}
	if (x.piecenum == 3 && x.orientation == 2){
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[0][2] = 1;
		x.piecet[0][1] = 1;
	}
	if (x.piecenum == 3 && x.orientation == 3){
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[2][2] = 1;
		x.piecet[3][2] = 1;
	}
	if (x.piecenum == 3 && x.orientation == 4){
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[0][2] = 1;
		x.piecet[0][1] = 1;
	}
	if (x.piecenum == 4 && x.orientation == 1){ // Z
		x.piecet[2][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[0][2] = 1;
	}
	if (x.piecenum == 4 && x.orientation == 2){
		x.piecet[0][3] = 1;
		x.piecet[0][2] = 1;
		x.piecet[1][2] = 1;
		x.piecet[1][1] = 1;
	}
	if (x.piecenum == 4 && x.orientation == 3){
		x.piecet[2][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[0][2] = 1;
	}
	if (x.piecenum == 4 && x.orientation == 4){
		x.piecet[0][3] = 1;
		x.piecet[0][2] = 1;
		x.piecet[1][2] = 1;
		x.piecet[1][1] = 1;
	}
	if (x.piecenum == 5 && x.orientation == 1){ // L
		x.piecet[0][1] = 1;
		x.piecet[0][2] = 1;
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
	}
	if (x.piecenum == 5 && x.orientation == 2){
		x.piecet[0][3] = 1;
		x.piecet[0][2] = 1;
		x.piecet[1][2] = 1;
		x.piecet[2][2] = 1;
	}
	if (x.piecenum == 5 && x.orientation == 3){
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[1][1] = 1;
		x.piecet[0][1] = 1;
	}
	if (x.piecenum == 5 && x.orientation == 4){
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[2][3] = 1;
		x.piecet[2][2] = 1;
	}
	if (x.piecenum == 6 && x.orientation == 1){ // J
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[1][1] = 1;	
	}
	if (x.piecenum == 6 && x.orientation == 2){
		x.piecet[0][2] = 1;
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;	
	}
	if (x.piecenum == 6 && x.orientation == 3){
		x.piecet[0][2] = 1;
		x.piecet[0][3] = 1;
		x.piecet[0][1] = 1;
		x.piecet[1][1] = 1;	
	}
	if (x.piecenum == 6 && x.orientation == 4){
		x.piecet[1][3] = 1;
		x.piecet[2][3] = 1;
		x.piecet[3][3] = 1;
		x.piecet[3][2] = 1;	
	}
	if (x.piecenum == 7 && x.orientation == 1){ // T
		x.piecet[1][3] = 1;
		x.piecet[0][2] = 1;
		x.piecet[1][2] = 1;
		x.piecet[2][2] = 1;	
	}
	if (x.piecenum == 7 && x.orientation == 2){
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[1][1] = 1;
		x.piecet[0][2] = 1;	
	}
	if (x.piecenum == 7 && x.orientation == 3){
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[2][3] = 1;
		x.piecet[1][2] = 1;	
	}
	if (x.piecenum == 7 && x.orientation == 4){	
		x.piecet[0][3] = 1;
		x.piecet[0][2] = 1;
		x.piecet[0][1] = 1;
		x.piecet[1][2] = 1;	
	}
	return x;
}

