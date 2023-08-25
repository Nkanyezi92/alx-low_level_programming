#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *entry)
{
	int a, b, c;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	a = 32;

	for (b = 0; entry[b] != '\0'; b++)
	{
		if (entry[b] >= 'b' && entry[b] <= 'z')
		{
			entry[b] =  entry[b] - a;
		}
		a = 0;
		for (c = 0; chars[c] != '\0'; c++)
		{
			if (chars[c] == entry[b])
			{
				a = 32;
				break;
			}
		}
	}
	return (entry);
}
