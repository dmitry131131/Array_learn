/* Supporting functions file*/
#include <stdio.h>
#include <stdlib.h>
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

void doub(int(*ar)[COLS])
{
	int r, c;
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			ar[r][c] *= 2;
	}
}

void FillArr(int(*ar)[COLS])
{
	int r, c;
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			ar[r][c] = c;
}

void ArraySum(int(*first)[COLS], int(*second)[COLS], int(*out)[COLS])
{
	int i, j;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			out[i][j] = first[i][j] + second[i][j];
}

void DrawMenu(void)
{
	printf("Please select mode\n");
	printf("f: Fill array  d: Double array\n");
	printf("o: Output array  s: summ arrays\n");
	printf("c: Change variable  m: malloc()  e: Exit\n");
}

void ScipInput(void)
{
	char ch;
	while ((ch = getchar()) != '\n')
		;
}

void ChangeVar(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Enternwords(char **ar, int count)
{
	char temp[100];
	int c;
	printf("Enter %d words:\n", count);

	for (int i = 0; i < count; i++)
	{
		if (scanf("%s", temp) == 1)
		{
			c = 0;
			while (temp[c] != '\0')
				c++;

			ar[i] = (char*)malloc(c + 1);

			for (int j = 0; j < c + 1; j++)
			{
					ar[i][j] = temp[j];
			}
		}

		else
		{
			i = 0;
			printf("Enter %d words:\n", count);
		}
	}
	/* Output words and free memory */
	for (int i = 0; i < count; i++)
	{
			puts(ar[i]);
			free(ar[i]);
	}
	ScipInput();
}
