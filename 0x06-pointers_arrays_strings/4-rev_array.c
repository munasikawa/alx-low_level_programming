#include "main.h"

/**
 * reverse_array - main function
 *
 * @a: pointer parameter
 * @n: variable
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	n--;
	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
