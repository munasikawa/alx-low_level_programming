#include "main.h"

/**
 *  string_toupper - main function
 *
 *  @j: string param
 *
 *  Return: char
 */
char *string_toupper(char *j)
{
	int i = 0;

	while (j[i] != '\0')
	{
		if ((j[i] >= 'a') && (j[i] <= 'z'))
			j[i] -= 'a' - 'A';
		i++;
	}

	return (j);
}
