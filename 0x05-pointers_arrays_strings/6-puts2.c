#include "main.h"
#include <string.h>

/**
 *  puts2 - prints every other character of a string
 *  @str: param
 *
 *  Return: void
 */
void puts2(char *str)
{
	int j, i;

	j = strlen(str);

	for (i = 0; i < j; i += 2)
		putchar(str[i]);
	putchar('\n');
}
