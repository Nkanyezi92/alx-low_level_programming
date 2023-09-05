#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an arry of size with char c
 * @size: unsigned int
 * @c: char 
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int x;

	if (size == 0)
	{
	return (NULL);
	}

	d = malloc((size) * sizeof(char));
	if (d == NULL)
	{
	return (NULL);
	}
	x = 0;
	while (x < size)
	{
	d[x] = c;
	x++;
	}
	d[x] = '\0';
	return (d);
}
