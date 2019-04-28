#include "board.h"
#include "board_print_plain.h"
#include <iostream>
#include <string.h>
using namespace std;
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

    char* step = new char[80];
    cout << "Input step" << endl;
    cin.getline(step, 80);

    char* stepBlack = strtok(step, " ");
    char* stepWhite = stepBlack;
    stepBlack = strtok(NULL, " ");

    char* thereWhite = strtok(stepWhite, "-");
    char* hereWhite = thereWhite;
    thereWhite = strtok(NULL, " ");

    char* thereBlack = strtok(stepBlack, "-");
    char* hereBlack = thereBlack;
    thereBlack = strtok(NULL, " ");

    char hereIntW[3];
    char thereIntW[3];
    char hereIntB[3];
    char thereIntB[3];

    strcpy(hereIntW, hereWhite);
    strcpy(thereIntW, thereWhite);
    strcpy(hereIntB, hereBlack);
    strcpy(thereIntB, thereBlack);

    char* charHereW = strtok(hereWhite, "12345678");
    char* intHereW = strtok(hereIntW, "abcdefgh");

    char* charThereW = strtok(thereWhite, "12345678");
    char* intThereW = strtok(thereIntW, "abcdefgh");

    char* charHereB = strtok(hereBlack, "12345678");
    char* intHereB = strtok(hereIntB, "abcdefgh");

    char* charThereB = strtok(thereBlack, "12345678");
    char* intThereB = strtok(thereIntB, "abcdefgh");

    char stepis[] = {*(charHereW),
		     *(intHereW),
		     *(charThereW),
		     *(intThereW),
		     *(charHereB),
		     *(intHereB),
		     *(charThereB),
		     *(intThereB)};

    int i = 1;
    i = CheckInput(stepis);

    if (i == 1)
        Move(stepis, chess_borad);
    else if (i == 0)
        cout << "Error input, try again" << endl;

    PrintBoard(chess_borad);

    delete step;
    return 0;
}
