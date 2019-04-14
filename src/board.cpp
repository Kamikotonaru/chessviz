void Move(char *charHereW, char* intHereW, char *charThereW, char *intThereW, char *charHereB, char *intHereB, char *charThereB, char *intThereB, char (*chessB)[9])
{	
	char a[] = {*(charHereW),*(intHereW),*(charThereW),*(intThereW),*(charHereB),*(intHereB),*(charThereB),*(intThereB)};
	int xy[8];
	for(int i = 0; i < 8; i++)
	{
		switch(a[i])
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