#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - main function
 * @size: Size of the array
 * @c: Character to insert
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *an;
	unsigned int i;

	if (size > 0)
	{
		an = malloc(size * sizeof(c));
		if (an == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		*(an + i) = c;
	return (an);
}
