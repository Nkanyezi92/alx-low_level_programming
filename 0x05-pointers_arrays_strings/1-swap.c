#include <stdio.h>

/**
 * swap_int - swaps values of integers
 * @a: first int
 * @b: second int
 * Return: 0
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
