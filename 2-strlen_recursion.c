#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string.
 * @s: string .
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	return (1 + _strlen_recursion((s + 1)));
	return (0);
}


