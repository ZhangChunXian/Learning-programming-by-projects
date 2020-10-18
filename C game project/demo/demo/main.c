#include "header.h"


int x = 10;
int y = 5;

int main()
{
	while(1)
	{
		system("cls");
		for (i = 0; i < x; i++)
		{
			printf("\n");
		}

		
		for (j = 0; j < y; j++)
		{
			printf(" ");
		}

		printplane();

		input = _getch();
		if (input == 's')  x++;
		if (input == 'w')  x--;
		if (input == 'a')  y--;
		if (input == 'd')  y++;


		
	}



	return 0;
}