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
	int copy, start = 0;
	int end = n - 1;

	while (start < end)
	{
/* swap */
		copy = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = copy;
		start++, end--;
	}
}
