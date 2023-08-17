#include "main.h"

/**
 * print_square - prints a square followed by new line
 * @size: int
 * Return:always 0
 */

void print_square(int size)
{
int a, b;
for (a = 0; a < size; a++)
{
for (b = 1; b <= size; b++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
