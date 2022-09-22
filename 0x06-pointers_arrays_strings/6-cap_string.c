#include "main.h"

/**
 *  cap_string - main function
 *  @x: pointer param
 *
 *  Return: char
 */
char *cap_string(char *x)
{
	int i = 1;
	int j = 0;
	char a[] = " \t\n,;.!?\"(){}";

	if (x[0] >= 'a' && x[0] <= 'z')
		x[0] -= 'a' - 'A';
	while (x[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
			if (x[i - 1] == a[j] && (x[i] >= 'a' && x[i] <= 'z'))
				x[i] -= ('a' - 'A');
		i++;
	}

	return (x);
}
