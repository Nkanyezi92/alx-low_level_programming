#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: input string
 *
 */

void _puts(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
