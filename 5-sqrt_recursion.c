#include "main.h"

/**
 * sqrt2 - input
 * @x: first num
 * @y: second num
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt2(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: Integer
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
