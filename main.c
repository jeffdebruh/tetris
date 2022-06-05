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

piece createpiece(int num, int o){
	piece x;
	x.piecenum = num;
	x.orientation = o;
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
	if (x.piecenum == 1 && x.orientation == 0){
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
	if (x.piecenum == 2 && x.orientation == 0){
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
		x.piecet[2][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[0][2] = 1;
	}
	if (x.piecenum == 3 && x.orientation == 0){
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
	if (x.piecenum == 4 && x.orientation == 0){
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
	if (x.piecenum == 5 && x.orientation == 0){
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
	if (x.piecenum == 6 && x.orientation == 0){
		x.piecet[1][3] = 1;
		x.piecet[2][3] = 1;
		x.piecet[3][3] = 1;
		x.piecet[3][2] = 1;	
	}
	if (x.piecenum == 0 && x.orientation == 1){ // T
		x.piecet[1][3] = 1;
		x.piecet[0][2] = 1;
		x.piecet[1][2] = 1;
		x.piecet[2][2] = 1;	
	}
	if (x.piecenum == 0 && x.orientation == 2){
		x.piecet[1][3] = 1;
		x.piecet[1][2] = 1;
		x.piecet[1][1] = 1;
		x.piecet[0][2] = 1;	
	}
	if (x.piecenum == 0 && x.orientation == 3){
		x.piecet[0][3] = 1;
		x.piecet[1][3] = 1;
		x.piecet[2][3] = 1;
		x.piecet[1][2] = 1;	
	}
	if (x.piecenum == 0 && x.orientation == 0){	
		x.piecet[0][3] = 1;
		x.piecet[0][2] = 1;
		x.piecet[0][1] = 1;
		x.piecet[1][2] = 1;	
	}
	return x;
}

typedef struct{
	int score;
	char name[20]; 
} scoring;

void writeFile( scoring tab[], int size){
	FILE* file = NULL;
	file = fopen("nom.txt", "w+");
	if (file == NULL){
		printf("Ouverture fichier impossible \n");
		printf(" code erreur = %d \n", errno);
		printf(" Message d'erreur = %s \n", strerror(errno));
		exit (1);
	}
	for (int i = 0; i < size; i++){
		fprintf(file, "%s", tab[i].name);
	}
	for (int j=0; j < size; j++){
		fprintf(file, "%d", tab[j].score);
	}
	fprintf(file, "\n");
}

scoring* readfile(int* pnmbr){
	scoring* tab = NULL;
	FILE* file = NULL;
	int Letternbr;
	file = fopen("nom.txt","r");
	if (file == NULL){
		printf("Ouverture fichier impossible \n");
		printf(" code erreur = %d \n", errno);
		printf(" Message d'erreur = %s \n", strerror(errno));
		exit (1);
	  }
	char playerline[1000];
	while (fgets(playerline, 999, file) != NULL){
		*pnmbr ++;
    }    
	tab = malloc(*pnmbr * sizeof(scoring));
	rewind(file);
	for (int i = 0; i < *pnmbr; i++){
		fscanf( file, "%s", tab[i].name);
		fscanf( file,"%d", &tab[i].score);
	}
	return (tab);
	}

void printboard(int board[11][12],int pts) {
  puts("_____________________");
  printf("score:%d",pts);
  puts("");
  puts(" A B C D E F G H I J");
  for (int i = 1; i < 11; i++) {
    for (int j = 1; j <= 10; j++) {
      switch (board[i][j]){
        case 1:
          printf("|@");
          break;
        case 0:
          printf("|_");
          break;
        default:
          printf("Erreur");
      }
    }
    puts("|");
  }
}

int linefull(int y, int board[11][12]) {
  for (int x = 1; x <= 10; x++) {
    if (board[y][x]== 0) {
      return 0;
    }
  }
  return 1;
}

int awardpts(int lines, int pts, int dif) {
  switch (lines) {
    case 0:
      break;
    case 1:
      pts += 40 * (dif + 1);
      break;
    case 2:
      pts += 100 * (dif + 1);
      break;
    case 3:
      pts += 300 * (dif + 1);
      break;
    case 4:
      pts += 1200 * (dif + 1);
      break;
    default:
      puts("error too much lines");
    }
  return pts;
}

void fall(int board[11][12],int x,int ldrop) {
    for (int i = x-ldrop+1; i > 0; i--) {
      for (int j = 1; j < 11; j++) {
          board[i+ldrop][j]=board[i][j];
        }
      }
    }

int lineclear(int board[11][12], int pts, int dif) {
  int x=0;
  int n=0;
  for (int i = 1; i <= 10; i++) {
    if (linefull(i, board) == 1) {
      for (int j = 1; j <= 10; j++) {
        board[i][j]=0;
        }
      n=i;
      x += 1;
    }
  }
  fall(board,n,x);
  x=awardpts(x, pts, dif);
  return x;
}

void printpiece(piece x){
  for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
      switch (x.piecet[i][j]){
        case 1:
          printf("|@");
          break;
        case 0:
          printf("|_");
          break;
        default:
          printf("Erreur");
      }
    }
    puts("|");
  }
}

int selectpiece (){
  srand(time(NULL));
  piece x;
  int num=rand()%7;
  puts("orientation?");
  x=createpiece(num,0);
  puts("0");
  printpiece(x);
  x=createpiece(num,1);
  puts("1");
  printpiece(x);
  x=createpiece(num,2);
  puts("2");
  printpiece(x);
  x=createpiece(num,3);
  puts("3");
  printpiece(x);
  scanf("%d",&num);
  while (num!=0 && num!=1 && num!=2 && num!=3){
    scanf("%d",&num);
  }
  return num;
}

int gameover(int board[11][12]){
  for (int i=1;i<=10;i++){
    if (board[0][i]==1){
      return 1;
    }
  }
  return 0;
}

void piecescollision(int board[11][12]){
  piece x;
  int i;
  int j;
  printf(" Où voulez-vous placer votre pièce (ligne / colonne) ? ");
  scanf("%d /n", &i);
  scanf("%d /n", &j);
  if (x.piecenum == 1 && x.orientation == 0 || x.orientation == 1 || x.orientation == 2 ||x.orientation == 3){
      if ( board[i+2][j+2] == 1){
        printf(" Place déjà prise, prenez une autre place");
      }
  }
  if (x.piecenum == 2 && x.orientation == 1 || x.orientation == 3 ){
    if ( board[i+4][1] == 1){
        printf(" Place déjà prise, prenez une autre place");
    }
  }
  if (x.piecenum == 2 && x.orientation == 2 || x.orientation == 0){
    if ( board[1][j+4] == 1){
        printf(" Place déjà prise, prenez une autre place");
    } 
  }
  if (x.piecenum == 3 && x.orientation == 1 || x.orientation == 3){
    if ( board[i+3][j+2] == 1){
        printf(" Place déjà prise, prenez une autre place");
    }
  }
  if (x.piecenum == 3 && x.orientation == 2 || x.orientation == 0){
    if ( board[i+2][j+3] == 1){
        printf(" Place déjà prise, prenez une autre place");
    } 
  }
  if (x.piecenum == 4 && x.orientation == 1 || x.orientation == 3){
    if ( board[i+3][j+2] == 1){
        printf(" Place déjà prise, prenez une autre place");
    }
  }
  if (x.piecenum == 4 && x.orientation == 2 || x.orientation == 0){
    if ( board[i+2][j+3] == 1){
        printf(" Place déjà prise, prenez une autre place");
    } 
  }
  if (x.piecenum == 5 && x.orientation == 1 || x.orientation == 3){
    if ( board[i+3][j+2] == 1){
        printf(" Place déjà prise, prenez une autre place");
    }
  }
  if (x.piecenum == 5 && x.orientation == 2 || x.orientation == 0){
    if ( board[i+2][j+3] == 1){
        printf(" Place déjà prise, prenez une autre place");
    } 
  }
  if (x.piecenum == 6 && x.orientation == 1 || x.orientation == 3){
    if ( board[i+3][j+2] == 1){
      printf(" Place déjà prise, prenez une autre place");
    }
  }
  if (x.piecenum == 6 && x.orientation == 2 || x.orientation == 0){
    if ( board[i+2][j+3] == 1){
        printf(" Place déjà prise, prenez une autre place");
    } 
  }
   if (x.piecenum == 0 && x.orientation == 1 || x.orientation == 3){
    if ( board[i+2][j+3] == 1){
      printf(" Place déjà prise, prenez une autre place");
    }
  }
  if (x.piecenum == 0 && x.orientation == 2 || x.orientation == 0){
    if ( board[i+3][j+2] == 1){
      printf(" Place déjà prise, prenez une autre place");
    } 
  }
  if ( i>10 || j>10){
  printf( " La pièce va sortir du cadrillage");
  }
}

int main() {
  int pts=0;
  int dif = 0;
  int x,temp=15;
  int n=-1;
  int board[11][12] = {{}};
  printboard(board,pts);
  ///while (gameover(board)==0){
    x=selectpiece();
    x=sleep(temp);
    piecescollision(board);
    while (x!=0 || n!=-1){
      pts+=lineclear(board,pts,dif);
      printboard(board,pts);
      }
  return 0;
}
