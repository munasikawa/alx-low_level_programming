#include "main.h"

/**
 * prime_check - verify if s is the square root of c
 * s: param
 * @c: param
 *
 * Return: 1 or 0
 */
int prime_check(int s, int c)
{
	if (s * s > c)
		return (1);
	if (c % s == 0)
		return (0);
	return (prime_check(s + 1, c));
}

/**
 * is_prime_number - function
 * @n: param
 * Return: 1 if n is a prime number or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(2, n));
}
