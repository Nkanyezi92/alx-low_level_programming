#include "main.h"

/**
 * reverse_array - prints reverse array.
 * @a: array
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	y = 0;
	z = n - 1;
	while (y < z)
	{
		x = *(a + y);
		*(a + y) = *(a + z);
		*(a + z) = x;
		y++;
		z--;
	}
}
