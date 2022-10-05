#include "main.h"
#include <string.h>

/**
 *  _strlen - returns the length of a string.
 *
 *  @s: string pointer to passed to this function
 *
 *  Return: Length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
