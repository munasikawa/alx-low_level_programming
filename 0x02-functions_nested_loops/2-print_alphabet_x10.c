#include "main.h"

/**
 *  print_alphabet_x10 - prints the alphabet ten times
 *
 *  Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int p;

	for (p = 0; p < 10; p++)
	{
		for (i = 'a'i; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
