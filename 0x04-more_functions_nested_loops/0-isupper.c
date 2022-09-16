#include "main.h"
/**
*_isupper - Prints upper case character
*
*@c: The character to be teted
*
*Return: 1 if c is uppercase otherwise 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);

return (0);
}
