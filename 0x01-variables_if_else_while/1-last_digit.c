#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
else if (n % 10 == 0)
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
else
printf("Last digit of %d is %d is less than 6 but not 0\n", n, n % 10);
return (0);
}