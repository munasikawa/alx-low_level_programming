#include "main.h"

/**
 *  print_alphabet - Prints the alphabet in lowercase
 *
 *  Returns: Always 0
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
