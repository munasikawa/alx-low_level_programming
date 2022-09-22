#include "main.h"
#include <string.h>

/**
 *  _strncpy - main function
 *
 *  @dest: param1 pointer
 *  @src: param2 pointer
 *  @n: param3 pointer
 *
 *  Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != 0) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
