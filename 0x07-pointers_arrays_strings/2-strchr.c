#include "main.h"

/**
 *  _strchr - main function
 *
 *  @s: pointer
 *  @c: char
 *
 *  Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
