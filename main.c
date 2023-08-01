/* Programm to learn array features */
#include <stdio.h>
#include "headfile.h"

int main(void)
{
	int arr1[ROWS][COLS], arr2[ROWS][COLS], sum[ROWS][COLS];
	int num;
	char ch;
	_Bool flag = 1;

	while (flag)
	{
		DrawMenu();
		scanf("%c", &ch);
		ScipInput();
		switch (ch)
		{
		case 'e':
		{
			flag = 0;
			break;
		}

		case 'f':
		{
			printf("Enter number of array:\n");
			while (scanf("%d", &num) != 1)
			{
				printf("Nubmer must be digital\n");
				printf("Enter number of array:\n");
				ScipInput();
			}
			ScipInput();

			if (num == 1)
			{
				FillArr(arr1);
				printf("Array 1 filled successfully\n");
			}
			else if (num == 2)
			{
				FillArr(arr2);
				printf("Array 2 filled successfully\n");
			}
			else
				printf("Array with number: %d not found\n", num);
			break;
		}

		case 'o':
		{
			printf("Enter number of array:\n");
			while (scanf("%d", &num) != 1)
			{
				printf("Nubmer must be digital\n");
				printf("Enter number of array:\n");
				ScipInput();
			}
			ScipInput();

			if (num == 1)
			{
				Out(arr1);
			}
			else if (num == 2)
			{
				Out(arr2);
			}
			else if (num == 3)
			{
				Out(sum);
			}
			else
				printf("Array with number: %d not found\n", num);
			break;
		}

		case 's':
		{
			ArraySum(arr1, arr2, sum);
			printf("Summation success!\n");
			break;
		}

		case 'd':
		{
			printf("Enter number of array:\n");
			while (scanf("%d", &num) != 1)
			{
				printf("Nubmer must be digital\n");
				printf("Enter number of array:\n");
				ScipInput();
			}
			ScipInput();
			if (num == 1)
			{
				doub(arr1);
				printf("Array 1 doubled successfully!\n");
			}
			else if (num == 2)
			{
				doub(arr2);
				printf("Array 2 doubled successfully!\n");
			}
			else if (num == 3)
			{
				doub(sum);
				printf("Array 3 doubled successfully!\n");
			}
			else
				printf("Array with number: %d not found\n", num);
			break;
		}

		default:
			break;
		}
	}

	printf("Programm done!\n");
	return 0;
}