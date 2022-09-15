#include "main.h"
/**
*_abs - Prints the absolute value of an integer
*
*@c: The value being tested
*
*Return: Always 0 (success)
*/
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-c);
	}
	return (0);
}
