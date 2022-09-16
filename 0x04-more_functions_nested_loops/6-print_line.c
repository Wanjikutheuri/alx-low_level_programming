#include "main.h"
/**
*print_line - Prints a line
*
*@n: Integer length of a line
*
*Return: Void
*/
void print_line(int n)
{
	int i = n;

	for (i = n; i > 0; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
