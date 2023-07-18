/* Programm to learn array features */
#include <stdio.h>
#include "headfile.h"

int main(void)
{
	int i;
	int arr[SIZE];
	for (i = 0; i < SIZE; i++)
		arr[i] = i;

	Reverse(arr, SIZE);

	for (i = 0; i < SIZE; i++)
		printf("%d", arr[i]);

	return 0;
}