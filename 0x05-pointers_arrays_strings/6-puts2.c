#include "main.h"
/**
*puts2 - puts2rints every other character
*
*@str: String to be printed
*
*Return: Void
*/
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
