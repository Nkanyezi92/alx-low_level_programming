#include "main.h"

/**
 * _pow_recursion - Returns value of x to power y
 * @x: value multiplied
 * @y: multiplier
 * Return: value x y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
