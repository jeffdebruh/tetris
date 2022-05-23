#include <stdio.h>
#include <stdlib.h>
#include <time.h>



typedef struct{
	int orientation:
	int nbr_piece;
	int piece[4][4];
}piece;


piece createpiece(){
	piece x;
	int 
	srand(time(NULL));
	x.nbr_piece=rand()%7;
	switch (x.nbr_piece){
		case 0:
		
			
	scanf("%d",&x.orientation);

int linefull(int y, char board){
	int c=0;
	for (i=0;i>9;i++){
		if (board[i][y]=="@"){
			c+=1;
		}
	}
	return c;	

int lineclear(int x,char board){
	for (i=9;i>=0;i--){
		if (linefull(i,board)==10){
			lineclear(
		}
		
	



int main(){
	char board[10][10];
	
