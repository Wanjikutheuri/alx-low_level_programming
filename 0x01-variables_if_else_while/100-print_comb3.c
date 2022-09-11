#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Description: Combination of two numbers
*
*Return: Always 0 (sucess)
*/
int main(void)
{
int n, p;
	for (n = '0'; n <= '8'; n++)
{
	for (p = n + 1; p <= '9'; p++)
{
		if (n != p)
	{
		putchar(n);
		putchar(p);
		if (n != '8' || p != '9')
		putchar(',');
		putchar(' ');
	}
}
}
	putchar('\n');
return (0);
}
