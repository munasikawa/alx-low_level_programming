#include "main.h"
#include <string.h>

/**
 *  _memset - main function
 *
 *  @s: pointer
 *  @b: char var
 *  @n: int
 *
 *  Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
