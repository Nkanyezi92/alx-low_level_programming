#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
