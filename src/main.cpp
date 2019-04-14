#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "board_print_plain.h"
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

	char step[80];
	printf("Input step\n");
	puts(step);
  
	char *stepBlack = strtok(step, " ");
    char *stepWhite = stepBlack;
	stepBlack = strtok(NULL," ");
	
	char *thereWhite = strtok(stepWhite,"-");
	char *hereWhite = thereWhite;
	thereWhite = strtok(NULL," ");
	
	char *thereBlack = strtok(stepBlack,"-");
	char *hereBlack = thereBlack;
	thereBlack = strtok(NULL," ");
	
	char hereIntW[3];
	char thereIntW[3];
	char hereIntB[3];
	char thereIntB[3];
	
	strcpy(hereIntW,hereWhite);
	strcpy(thereIntW,thereWhite);
	strcpy(hereIntB,hereBlack);
	strcpy(thereIntB,thereBlack);
	
	char *charHereW = strtok(hereWhite,"12345678");
	char *intHereW = strtok(hereIntW,"abcdefgh");
	
	char *charThereW = strtok(thereWhite,"12345678");
	char *intThereW = strtok(thereIntW,"abcdefgh");
	
	char *charHereB = strtok(hereBlack,"12345678");
	char *intHereB = strtok(hereIntB,"abcdefgh");

	char *charThereB = strtok(thereBlack,"12345678");
	char *intThereB = strtok(thereIntB,"abcdefgh");
	
	char steps[] = {*(charHereW),*(intHereW),*(charThereW),*(intThereW),*(charHereB),*(intHereB),*(charThereB),*(intThereB)};
	
	if(CheckInput(steps))
		Move(steps,chess_borad);
	else printf("Error input, try again");

	return 0;
}