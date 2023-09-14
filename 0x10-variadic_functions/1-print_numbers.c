#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int x;

	if (separator == NULL)
	{
	separator = "";
	}

	va_start(v, n);

	for (x = 0; x < n; x++)
	{
	printf("%d", va_arg(v, int));
	if (n == x + 1)
	{
	break;
	}
	printf("%s", separator);
	}
	printf("\n");
	va_end(v);
}
