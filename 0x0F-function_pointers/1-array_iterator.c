#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL)
	return;
	if (action == NULL)
	return;

	for (x = 0; x < size; x++)
	action(array[x]);
}
