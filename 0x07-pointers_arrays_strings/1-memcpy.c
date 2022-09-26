#include "main.h"
/**
**_memcpy - Coppies the memory area
*
*@dest: Where to copy the memory to
*@src: Memory area to copy from
*@n: Number of bytes
*
*Return: A pointer to @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
