#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int a, b = 0;

	if (n == 0)
	return (0);

	va_start(val, n);

	for (a = 0; a < n; a++)
	{
	b += va_arg(val, const unsigned int);
	}

	va_end(val);

	return (b);
}
