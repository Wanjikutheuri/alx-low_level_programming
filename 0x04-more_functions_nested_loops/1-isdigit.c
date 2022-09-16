#include "main.h"
/**
* _isdigit - Checks for a digit from 0 through 9
*
*@c: The integer to check
*
*Return: 1 if true 0 when wrong
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
