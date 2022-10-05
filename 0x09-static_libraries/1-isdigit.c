#include "main.h"

/**
 * *_isdigit - function
 *
 * @c: char
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
