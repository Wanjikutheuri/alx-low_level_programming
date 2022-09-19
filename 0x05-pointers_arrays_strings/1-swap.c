#include "main.h"
/**
*swap_int - Swaps the value of two integers
*
*@a: Integer one
*
*@b: Integer two
*
*Return: Always 0 sucess
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
