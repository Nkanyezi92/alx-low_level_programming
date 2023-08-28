#include "main.h"

/**
 * _strstr - function that locates a substring.
 *@haystack: first value -char
 *@needle: second value - char
 *
 * Return: char with result
 */
char *_strstr(char *haystack, char *needle)
{
	int d = 0, e = 0, f, g = 0, h, i = 0;
	char *c;

	while (needle[d] != '\0')
	{
	d++;
	}
	while (haystack[i] != '\0')
	{
	i++;
			}
	if (d == 0)
	return (haystack);
	while (haystack[g] != '\0')
	{
	if (haystack[g] == needle[0])
{
	c = &haystack[g];
	h = g;
	e = 0;
	for (f = 0; f < d; f++)
	{
	if (haystack[h] == needle[f])
	e++;
	h++;
	}
	}
	if (e == d)
	return (c);
	g++;
	}
	return ('\0');
}
