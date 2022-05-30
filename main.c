#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printboard(char board[][10]){
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			printf("%s|",&board[i][j]);
		}
		puts("|");
	}
}

int linefull(int y, char board[][10]){
	int c=0;
	for (int i=0;i>9;i++){
		if (strcmp(&board[i][y],"@")==0){
			c+=1;
		}
	}
	return c;
}

int awardpoints(int lines,int points){
	switch (lines){
		case 1:
			points+=40*(lines+1);
			break;
		case 2:
			points+=100*(lines+1);
			break;
		case 3:
			points+=300*(lines+1);
			break;
		case 4:
			points+=1200*(lines+1);
			break;
		default:
			printf("error too much lines");
		}
		return points;
	}

///void fall(char board){
	///for (int i=0;i>9;i++){
		

int lineclear(int x,char board[][10],int points){
	for (int i=9;i>=0;i--){
		if (linefull(i,board)==10){
			for (int j=0;j>9;i++){
				///&board[i][j]=" ";
			x+=1;
			}
		}
	awardpoints(x,points);
	return 0;
	}
}

int main(){
	///int points=0;
	char board[10][10]={{"_"}};
	printboard(board);
	return 0;
}











