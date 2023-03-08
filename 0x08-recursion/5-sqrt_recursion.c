#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/** _sqrt_recursion - returns square of nr
 * @n: number
 * Return: natural sqaure root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculats square root
 * @n: number
 * @i: iterate number
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
