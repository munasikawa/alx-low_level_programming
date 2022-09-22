#include "main.h"

/**
 * _strcat - main function
 *
 * @dest: first param
 * @src: second param
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int j = 0, i;

	while (dest[j])
		j++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j += 1;
	}

	dest[j] = '\0';
	return (j);
}
