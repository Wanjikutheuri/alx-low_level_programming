#include "main.h"
/**
*_islower - Prints lowercase numbers
*
*@c: Number to pass to _islower function
*
*Return: 1 if lower case
*/
int _islower(int c)
{

if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
