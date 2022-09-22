#include "main.h"
/**
*reverse_array - Reverses a string
*
*@a: The array of integers
*
*@n: Number of elements to swap
*Return: Always zero
*/
void reverse_array(int *a, int n)
{
	int i;
	int c[n];

	for (i = 0; i < n; i++)
	{
		c[n - i - 1] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = c[1];
	}
}
