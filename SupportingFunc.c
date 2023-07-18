/* Supporting functions file*/
#include <stdio.h>
#include "headfile.h"

void Reverse(int *ar, int s)
{
	int i, temp;
	for (i = 0; i < (s / 2); i++)
	{
		temp = ar[i];
		ar[i] = ar[s - 1 - i];
		ar[s - 1 - i] = temp;
	}
}

void Out(int (*ar)[COLS])
{
	int r, c;
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			printf("%d ", ar[r][c]);
		printf("\n");
	}
}

void doub(int(*ar)[COLS], int row)
{
	int r, c;
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < COLS; c++)
			ar[r][c] *= 2;
	}
}