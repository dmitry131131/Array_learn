/* Headfile with prototypes of func and preptocessor dirictives */
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
	#define _CRT_SECURE_NO_WARNINGS
	#pragma warning(disable:4996)
#endif

#define SIZE 20

void Reverse(int *ar, int s);