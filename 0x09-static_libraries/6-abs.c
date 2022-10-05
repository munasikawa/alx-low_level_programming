#include "main.h"

/**
 *  _abs - returns the absolute value of an integer
 *  @s: Integer to be computed
 *  Return: Absolute value of an integer
 */
int _abs(int s)
{
	if (s < 0)
		s = -s;
	return (s);
}
