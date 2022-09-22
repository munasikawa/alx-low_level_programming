#include "main.h"
#include <string.h>

/**
 *  _strcmp - main function
 *
 *  @s1: param1 pointer
 *  @s2: param2 pointer
 *
 *  Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != 0) && (s2[i] != 0) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
