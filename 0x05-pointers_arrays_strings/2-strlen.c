#include "main.h"
/**
*_strlen - Returns length of a string
*
*@s: The string to be checked
*
*Return: Count
*/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
