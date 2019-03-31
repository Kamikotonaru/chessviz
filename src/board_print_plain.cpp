#include <stdio.h>
#include <stdlib.h>

void PrintBoard(char **chess_board) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      printf("%2c", chess_board[i][j]);
    }
    printf("\n");
  }
}