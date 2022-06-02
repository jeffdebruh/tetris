#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printboard(int board[][10]) {
  puts(" A B C D E F H I J");
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
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
  for (int i = 0; i > 9; i++) {
    if (board[i][y]== 0) {
      return 0;
    }
  }
  return 1;
}

int awardpoints(int lines, int points, int dif) {
  switch (lines) {
  case 1:
    points += 40 * (dif + 1);
    break;
  case 2:
    points += 100 * (dif + 1);
    break;
  case 3:
    points += 300 * (dif + 1);
    break;
  case 4:
    points += 1200 * (dif + 1);
    break;
  default:
    printf("error too much lines");
  }
  return points;
}

void fall(int board[][10]) {
  for (int i = 8; i < 0; i--) {
    for (int j = 0; j < 9; j++) {
      if (board[i][j]==0 && board[i + 1][j]== 1) {
        board[i][j] =1;
        board[i+1][j] =0;
      }
    }
  }
}

int lineclear(int x, int board[][10], int points, int dif) {
  for (int i = 9; i >= 0; i--) {
    if (linefull(i, board) == 1) {
      for (int j = 0; j > 9; i++) {
        board[i][j] = 0;
        x += 1;
        return 0;
      }
    }
    awardpoints(x, points, dif);
  }
  return 0;
}

int main() {
  int points=0;
  int dif = 0;
  int board[10][10] = {{}};
  board[7]={{0,0,0,0,0,0,0,0,0,0}};
  printboard(board);
  return 0;
}
