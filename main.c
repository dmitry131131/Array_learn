/* Programm to learn array features */
#include <stdio.h>
#include "headfile.h"

int main(void)
{
	int arr1[ROWS][COLS], arr2[ROWS][COLS], sum[ROWS][COLS];

	FillArr(arr1);
	FillArr(arr2);
	Out(arr1);
	printf("\n");
	Out(arr2);
	printf("\n");
	ArraySum(arr1, arr2, sum);
	Out(sum);


	/*
	Out(arr);
	doub(arr, ROWS);
	printf("\n");
	Out(arr);
	*/



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