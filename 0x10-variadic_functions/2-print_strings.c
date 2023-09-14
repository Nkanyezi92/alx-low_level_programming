#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @n: number of arguments
 * @separator: character separator 
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *c, *d;
	unsigned int x;
	va_list vl;

	if (separator == NULL || *separator == 0)
	c = "";
	else
	c = (char *) separator;
	va_start(vl, n);

	if (n > 0)
	printf("%s", va_arg(vl, char *));
	for (x = 1; x < n; x++)
	{
	d = va_arg(vl, char*);
	if (d == NULL)
	d = "(nil)";
	printf("%s%s", c, d);
	}
	printf("\n");
	va_end(vl);
}
