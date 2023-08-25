#include "main.h"

/**
 * leet - Write a function that encodes a string
 *
 * @changed: This is the input 
 *
 * Return: String converted
 */

char *leet(char *changed)
{
	int x, y;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char min[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (x = 0; changed[x] != '\0'; ++x)
	{
		for (y = 0; y < 5; y++)
		{
			if (changed[x] == minus[y] || changed[x] == min[y])
			{
				changed[x] = num[y];
			}
		}
	}
	return (changed);
}
