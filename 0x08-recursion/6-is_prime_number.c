#include "main.h"

int prime_number(int n, int b);

/**
 * is_prime_number - checks if a number is a prime.
 * @n: number
 *
 * Return: 1 if a Prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - Entry
 * @n: Original num
 * @b: second num
 *
 * Return: 1 if a Prime else 0
 */
int prime_number(int n, int b)
{
	if (b == 1)
	return (1);
	else if (n % b == 0)
	return (0);
	else if (n % b != 0)
	return (prime_number(n, b - 1));
	return (0);
}


