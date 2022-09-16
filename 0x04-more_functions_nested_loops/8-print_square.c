#include "main.h"
/**
*print_square - Prints a square
*
*@size: Size of the square
*
*Return: Void
*/
void print_square(int size)
{
	int i, hash;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (hash = size; hash > 0; hash--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
