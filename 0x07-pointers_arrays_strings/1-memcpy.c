#include "main.h"

/**
 *  _memcpy - main function
 *  @dest: pointer
 *  @src: pointer
 *  @n: int
 *
 *  Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
