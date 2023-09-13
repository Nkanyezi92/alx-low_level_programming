#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - input
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer 
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
	if (size <= 0)
	return (-1);

	for (a = 0; a < size; a++)
	if (cmp(array[a]))
	return (a);
	}

	return (-1);
}

