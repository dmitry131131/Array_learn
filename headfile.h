/* Headfile with prototypes of func and preptocessor dirictives */
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
	#define _CRT_SECURE_NO_WARNINGS
	#pragma warning(disable:4996)
#endif

#define SIZE 20
#define ROWS 4
#define COLS 7

void Reverse(int *ar, int s);    // Array reverse func
 
void Out(int (*ar)[COLS]);       // Twin array output func

void doub(int (*ar)[COLS]);    // Doubling array func

void FillArr(int(*ar)[COLS]);  // Fill Array 

void ArraySum(int (*first)[COLS], int (*second)[COLS], int (*out)[COLS]); // Summ all array elements 

void DrawMenu(void);  // Menu drawing func

void ScipInput(void); // Scip trash simbols func

void ChangeVar(int *, int *); // Change variable

char** Enternwords(int count);  // Enter n words and write them to array

char* Enterword(); // Enter 1 word
