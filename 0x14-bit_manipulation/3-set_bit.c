#include "main.h"

/**
 * set_bit - sets bit at the index to 1
 * @n: pointer to the number
 * @index: the index to change
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
