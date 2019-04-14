#ifndef BOARD_H
#define BOARD_H 
#include "board.cpp"

int CheckInput(char *steps);
void Move(char *charHereW, char* intHereW, char *charThereW, char *intThereW, char *charHereB, char *intHereB, char *charThereB, char *intThereB, char (*chessB)[9]);

#endif