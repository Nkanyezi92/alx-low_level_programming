#include "main.h"

/**
 * _strchr - prints first occurrence of a char.
 * @s: string
 * @c: char
 *
 * Return: string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);

	}
	else
	s++;
	}
	if (*s == c)
	return (s);
	else
	return (0);
}
