#include "main.h"

/**
 * _memcpy - function that copies memory area
 *@dest: the address of memory 
 *@src: second 
 *@n: thirth val
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
