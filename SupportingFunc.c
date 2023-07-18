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