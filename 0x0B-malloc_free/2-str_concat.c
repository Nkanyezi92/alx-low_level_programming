#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - input
 *@s1: first string 
 *@s2: second string 
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *c = NULL;
	unsigned int i;
	int x;
	int y;
	int z;

	z = 0;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	c = (char *)malloc((x + y + 1) * sizeof(char));
	if (c == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	c[i] = s1[i];
	for (; s2[z] != '\0'; i++)
	{
	c[i] = s2[z];
	z++;
	}
	return (c);
}
