#include "main.h"
#include <stdio.h>
/**
*print_array - Prints elements of an array
*
*@a: Integer one
*
*@n: integer two
*
*Return: Void
*/
void print_array(int *a, int n)
{
	int ctr;

	for (ctr = 0; ctr < n; ctr++)
	{
		if (ctr == 0)
		{
			printf("%d", a[ctr]);
		}
		else
		{
			printf(", %d", a[ctr]);
		}
	}
	putchar('\n');
}
