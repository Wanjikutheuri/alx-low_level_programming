#include "main.h"
/**
*print_last_digit - Prints the last digit
*
*@a: The number being tested
*
*Return: The last digit
*/
int print_last_digit(int a)
{
	int last = a % 10;

	if (a < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
