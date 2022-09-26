#include "main.h"
#include <stdio.h>
/**
**_strchr - Locates a character in a string
*
*@s: string to check
*@c: Character we are looking for
*
*Return: pointer to first character
*Retrun: NULL if character isn't found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
		if (c == '\0')
			return (s);
		return (NULL);
}
