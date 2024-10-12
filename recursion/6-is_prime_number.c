#include "main.h"

/**
 * check - checks if a number is prime
 * @n: number to check
 * @i: number to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check(n, n - 1));
}
