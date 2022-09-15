#include "main.h"
/**
*print_sign - Prints signs of numbers
*
*@n: The number to be tested
*
*Return: 1 when positive 0 when negative else -1
*/
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
