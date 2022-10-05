#include "main.h"

/**
 *  _isalpha - Check for alphabetical character
 *  @c: a character to be checked on
 *  Return: 0 or 1 depending on conditions
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
