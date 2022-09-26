#include "main.h"

/**
 *  _strstr - main function
 *
 *  @haystack: pointer
 *  @needle: pointer
 *
 *  Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	i = 0;
	while (needle[i] != '\0')
		i++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, i) == 0)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
