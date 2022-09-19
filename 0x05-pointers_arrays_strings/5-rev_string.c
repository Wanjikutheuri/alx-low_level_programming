#include "main.h"
/**
*rev_string - Prints reversed string
*
*@s: The string to be reversed
*
*Return: Always 0 sucess
*/
void rev_string(char *s)
{
	int counter;
	int memo[1000000];
	int index = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		memo[counter] = *(s + counter);
	}
	counter--;
	for (; counter >= 0; counter--)
	{
		*(s + index) = *(memo + counter);
		index++;
	}
	counter++;
}
