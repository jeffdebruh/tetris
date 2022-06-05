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
