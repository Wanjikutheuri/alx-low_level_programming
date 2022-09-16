#include "main.h"
/**
*more_numbers - Prints 10 times the numbers from 0 to 14
*
*Return: void
*/
void more_numbers(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			int n;

			if ((b / 10) > 0)
			{
				n = b / 10;
				_putchar(n + '0');
			}
			n = b % 10;
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
