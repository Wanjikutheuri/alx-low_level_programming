#include "main.h"
/**
*times_table - Prints the times table
*
*Return: Always 0
*/
void times_table(void)
{
int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0 ; b <= 9; b++)
		{
			product = (a * b);

			if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product == 0)
			{
				_putchar('0');

			}

			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			else if ((product < 10) && (b != 0))
			{
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
