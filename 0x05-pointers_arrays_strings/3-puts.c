#include "main.h"
#include <stdio.h>
/**
*_puts - Prints a string
*
*@str: The string
*
*Return: Always 0 sucess
*/
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
