#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * The terminating null bytes (\0) are not compared
 * @haystack: string where the search is made
 * @needle: string searched in haystack
 * Return: A Pointer or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
		}
	return ('\0');
}
