/* Programm to learn array features */
#include <stdio.h>
#include "headfile.h"

int main(void)
{
	int arr[ROWS][COLS];
	int r, c;
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			arr[r][c] = c;

	Out(arr);
	doub(arr, ROWS);
	printf("\n");
	Out(arr);


	/*
	int i;
	int arr[SIZE];
	for (i = 0; i < SIZE; i++)
		arr[i] = i;

	Reverse(arr, SIZE);

	for (i = 0; i < SIZE; i++)
		printf("%d", arr[i]);
	*/

	return 0;
}