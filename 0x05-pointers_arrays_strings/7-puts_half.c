#include "main.h"
#include <string.h>

/**
 *  puts_half - prints half of a string
 *  @str: param
 *
 *  Return: void
 */
void puts_half(char *str)
{
	int j, h, i;

	j = strlen(str);

	if (j % 2 == 1)
		h = j / 2 + 1;
	else
		h = j / 2;
	for (i = h; i < j; i++)
		putchar(str[i]);
	putchar('\n');
}
