#include <stdio.h>
#include <stdlib.h>

void PrintBoard(char (*chessB)[9])
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%2c", chessB[i][j]);
        }
        printf("\n");
    }
}