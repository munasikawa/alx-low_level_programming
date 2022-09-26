#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - main function
 *
 *  @a: pointer
 *  @size: int var
 *
 *  Return: null
 */
void print_diagsums(int *a, int size)
{
	int i, calx, caly;

	calx = caly = 0;
	for (i = 0; i < (size * size); i += size + 1)
		calx += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		caly += a[i];
	printf("%d, %d\n", calx, caly);
}
