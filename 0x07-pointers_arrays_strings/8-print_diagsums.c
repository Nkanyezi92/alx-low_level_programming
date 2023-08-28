#include "main.h"

#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: char
 *@size: int
 */
void print_diagsums(int *a, int size)
{
	int b, c, d, e = 0, sumA = 0, sumB = 0;

	d = size - 1;
	for (b = 0; b < size; b++)
	{
	for (c = 0; c < size; c++)
	{
	if (b == c)
	sumA += a[e];
	if (c == d)
	sumB += a[e];
	e++;
	}
	d--;
	}
	printf("%i, %i\n", sumA, sumB);
}
