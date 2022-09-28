#include "main.h"
/**
*_strlen_recursion - Prints length of  string
*
*@s: The stirng to count
*
*Return: Integer
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
