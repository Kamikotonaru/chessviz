#include <iostream>
#include <stdlib.h>

int main()
{
    char chess_borad[9][9] = {{'8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                              {'7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                              {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                              {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                              {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                              {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                              {'2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                              {'1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                              {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%2c", chess_borad[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}