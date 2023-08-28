#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *@s: first val
 *@b: second val
 *@n: thirth 
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
