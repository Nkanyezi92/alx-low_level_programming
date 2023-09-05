#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string 
 * Return: pointer to duplicated string 
 */
char *_strdup(char *str)
{
	char *s = NULL;
	unsigned int a;
	int b;

	if (str == NULL)
	return (NULL);
	for (b = 0; str[b] != '\0'; b++)
		;
	s = (char *)malloc(b + 1 * sizeof(char));
	if (s != NULL)
	{
	for (a = 0; str[a] != '\0'; a++)
	s[a] = str[a];
	} else
	{
	return (NULL);
	}
	s[a] = '\0';
	return (s);
}
