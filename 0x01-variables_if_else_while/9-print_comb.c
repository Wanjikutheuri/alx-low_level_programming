#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (sucess)
*/
int main(void)
{
int n;
	for (n = '0'; n <= '9'; n++)
	{
	putchar((n % 10) + '0');
		if (n == 0)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}