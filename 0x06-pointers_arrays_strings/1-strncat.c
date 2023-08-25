#include "main.h"

/**
 * _strncat - concatenate strings.
 * @dest: string
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (*(dest + x) != '\0')
		x++;

	while (*(src + y) != '\0' && x < 97 && y < n)
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	*(dest + x) = '\0';
	return (dest);
}
