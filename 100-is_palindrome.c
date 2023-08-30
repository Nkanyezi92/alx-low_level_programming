#include "main.h"

/**
 * palA - obtains length of a
 * @a: string
 * @i: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int palA(char *a, int i)
{
	if (*a == 0)
	return (i - 1);
	return (palA(a + 1, i + 1));
}
/**
 * palB - compares string
 * @b: string
 * @a: length
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */

int palB(char *b, int a)
{
	if (*b != *(b + a))
	return (0);
	else if (*b == 0)
	return (1);
	return (palB(b + 1, a - 2));
}
/**
 * is_palindrome - checks for palindrome
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int x;

	x = palA(s, 0);
	return (palB(s, x));
}
