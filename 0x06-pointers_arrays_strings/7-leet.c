#include "main.h"

/**
 *  leet -> main function
 *
 *  @x: pointer param
 *
 *  Return: char
 */
char *leet(char *x)
{
	int i = 0;
	int j = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "43071";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (x[i] == a[j])
				x[i] = b[j / 2];
		}
	}
	return (x);
}
