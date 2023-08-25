#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
		{
			*(s + x) = *(s + x) - 32;
		}
		x++;
	}
	return (s);
}
