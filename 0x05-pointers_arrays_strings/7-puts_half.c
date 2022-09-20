#include "main.h"
/**
*puts_half - Prints half the value
*
*@str: The value to be checked
*
*Return: Void
*/
void puts_half(char *str)
{
	int x;
	int y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	y = 0;
	y = x / 2;
	if (x % 2 != 0)
	{
		y++;
	}
	while (str[y] != '\0')
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar('\n');
}
