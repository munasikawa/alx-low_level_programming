#include "main.h"

/**
 * sqrt_check - verify if s is the square root of c
 * @s: param
 * @c: param
 * Return: int
 */
int sqrt_check(int s, int c)
{
	if (s * s == c)
		return (s);
	if (s * s > c)
		return (-1);
	return (sqrt_check(s + 1, c));
}

/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: param
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_check(1, n));
}
