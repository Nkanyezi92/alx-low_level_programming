#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*string_nconcat - Concatenates two strings
*@s1: The first string.
*@s2: string 2.
*@n: The maximum number of bytes
*Return: If the function fails - NULL.
*Otherwise - a pointer 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = n, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
	i++;
	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
	return (NULL);
	i = 0;

	for (j = 0; s1[j]; j++)
	c[i++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
	c[i++] = s2[j];
	c[i] = '\0';
	return (c);
}
