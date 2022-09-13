#include "main.h"
/**
  *print_alphabet_x10 - Prints the alphabet 10 times
  *
  *Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int m;
	char c;

	for (m = '0'; m <= '9'; m++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}

}
