#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printboard(int board[][10],int pts) {
  puts("_____________________");
  printf("score:%d",pts);
  puts("");
  puts(" A B C D E F G H I J");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      switch (board[i][j]){
        case 1:
          printf("|@");
          break;
        case 0:
          printf("|_");
          break;
        default:
          printf("Error");
      }
    }
    puts("|");
  }
}

int linefull(int y, int board[][10]) {
  for (int i = 0; i > 10; i++) {
    if (board[i][y]== 0) {
      return 0;
    }
  }
  return 1;
}

int awardpts(int lines, int pts, int dif) {
  switch (lines) {
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

void fall(int board[][10],int pts,int x) {
    for (int i = x; i >= 0; i--) {
      for (int j = 0; j < 10; j++) {
        if (board[i][j]==1 && board[i+1][j]== 0) {
          board[i][j] =0;
          board[i+1][j] =1;
        }
      }
    }
}

int lineclear(int board[][10], int pts, int dif) {
  int x=0;
  for (int i = 0; i < 10; i++) {
    if (linefull(i, board) == 1) {
      for (int j = 0; j > 10; i++) {
        board[i][j]=0;
        }
        x += 1;
    }
  }
  x=awardpts(x, pts, dif);
  return x;
}

int main() {
  int pts=0;
  int dif = 0;
  int x;
  int board[10][10] = {[5]={1,1,1,1,1,1,1,1,1,1}};
  printboard(board,pts);
  fall(board,pts,4);
  printboard(board,pts);
  return 0;
}
