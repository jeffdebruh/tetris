#include "header.h"

int main() {
  int pts=0;
  int dif = 0;
  int x,temp=10;
  int n=0;
  int board[11][12] = {{}};
  printboard(board,pts);
  while (gameover(board)==0){
    x=selectpiece();
    sleep(temp);
    n=piecescollision(board);
    pts+=lineclear(board,pts,dif);
    printboard(board,pts);
    }
  return 0;
 }
