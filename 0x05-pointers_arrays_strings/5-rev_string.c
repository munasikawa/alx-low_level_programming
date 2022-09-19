#include "main.h"

/**
 *  rev_string -> a function that reverses a string.
 *  @s: param
 *
 *  Return: void
 */
void rev_string(char *s)
{
	char src;
	int i, a, b;

	a = 0;
	b = 0;

	while (s[a] != '\0')
		a++;

	b = a - 1;
	for (i = 0; i < a / 2; i++)
	{
		src = s[i];
		s[i] = s[b];
		s[b] = src;
		b -= 1;
	}
}
