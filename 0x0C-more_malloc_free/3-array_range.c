#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number
* @max: lagrest val
*
* Return: pointer to the address 
*/

int *array_range(int min, int max)
{
	int *x;
	int y, z = 0;

	if (min > max)
	return (NULL);
	x = malloc(sizeof(*x) * ((max - min) + 1));
	if (x != NULL)
	{
	for (y = min; y <= max; y++)
	{
	x[z] = y;
	z++;
	}
	return (x);
	}
	else
	return (NULL);

}
