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
char z;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
return (0);
}
