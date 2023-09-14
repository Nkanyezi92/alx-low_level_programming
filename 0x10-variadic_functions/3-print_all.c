#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list val;
	int x = 0, y = 0;
	char *d = ", ";
	char *e;

	va_start(val, format);

	while (format && format[y])
	y++;

	while (format && format[x])
	{
		if (x  == (y - 1))
		{
		d = "";
		}
		switch (format[x])
		{
		case 'c':
			printf("%c%s", va_arg(val, int), d);
			break;
		case 'i':
			printf("%d%s", va_arg(val, int), d);
			break;
		case 'f':
			printf("%f%s", va_arg(val, double), d);
			break;
		case 's':
			e = va_arg(val, char *);
			if (e == NULL)
			e = "(nil)";
			printf("%s%s", e, d);
			break;
	}
	x++;
	}
	printf("\n");
	va_end(val);
}
