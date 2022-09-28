#include "main.h"
/**
*_pow_recursion - prints powers
*
*@x: The base
*@y: The power
*
*Return: The value of @y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
