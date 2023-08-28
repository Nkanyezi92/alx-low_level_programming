#include "main.h"

/**
 * _strspn - function that gets length of prefix substring
 *@s: first val
 *@accept: second val
 *
 * Return: char 
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y = 0;
	unsigned int z = 0;

	while (s[y] != ' ' && s[y] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[y] == accept[x])
		z++;
		x++;
		}
		y++;
		x = 0;
	}
	return (z);
}
