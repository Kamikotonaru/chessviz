#include <cstring>
#include <iostream>

int CheckInput(char *stepis)
{
	int len = strlen(stepis);
	int flag = 1;
	for(int i = 0; i < len; i++)
	{
		switch(stepis[i])
		{
			case 'a':
				flag = 1;
				break;
			case 'b':
				flag = 1;
				break;
			case 'c':
				flag = 1;
				break;
			case 'd':
				flag = 1;
				break;
			case 'e':
				flag = 1;
				break;
			case 'f':
				flag = 1;
				break;
			case 'g':
				flag = 1;
				break;
			case 'h':
				flag = 1;
				break;
			case '1':
				flag = 1;
				break;
			case '2':
				flag = 1;
				break;
			case '3':
				flag = 1;
				break;
			case '4':
				flag = 1;
				break;
			case '5':
				flag = 1;
				break;
			case '6':
				flag = 1;
				break;
			case '7':
				flag = 1;
				break;
			case '8':
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		if(flag == 0) return 0;
	}
	return 1;
}

void Move(char *steps, char (*chessB)[9])
{	
	int xy[8];
	int len = strlen(steps);
	for(int i = 0; i < len; i++)
	{
		switch(steps[i])
		{
			case 'a':
				xy[i] = 1;
				break;
			case 'b':
				xy[i] = 2;
				break;
			case 'c':
				xy[i] = 3;
				break;
			case 'd':
				xy[i] = 4;
				break;
			case 'e':
				xy[i] = 5;
				break;
			case 'f':
				xy[i] = 6;
				break;
			case 'g':
				xy[i] = 7;
				break;
			case 'h':
				xy[i] = 8;
				break;
			case '1':
				xy[i] = 7;
				break;
			case '2':
				xy[i] = 6;
				break;
			case '3':
				xy[i] = 5;
				break;
			case '4':
				xy[i] = 4;
				break;
			case '5':
				xy[i] = 3;
				break;
			case '6':
				xy[i] = 2;
				break;
			case '7':
				xy[i] = 1;
				break;
			case '8':
				xy[i] = 0;
				break;
		}
	}
		
		
	if(chessB[xy[1]][xy[0]] != ' ')
	{
		if(chessB[xy[3]][xy[2]] == ' ')
		{
			char tmp = chessB[xy[1]][xy[0]];
			chessB[xy[1]][xy[0]] = ' ';
			chessB[xy[3]][xy[2]] = tmp;		
		}
	}
	if(chessB[xy[5]][xy[4]] != ' ')
	{
		if(chessB[xy[7]][xy[6]] == ' ')
		{
			char tmp = chessB[xy[5]][xy[4]];
			chessB[xy[5]][xy[4]] = ' ';
			chessB[xy[7]][xy[6]] = tmp;	
		}	
	}
}