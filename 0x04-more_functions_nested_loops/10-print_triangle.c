#include "main.h"

/**
 *print_triangle - print triangle
 *@size:int
 *Return: always 0
 */

void print_triangle(int size)
{
int a, b, c;

for (a = size; a > 0; a--)
{
	for (b = 1 ; b < a; b++)
	{	_putchar(' ');
	}
	for (c = size; c >= a; c--)
	{ _putchar('#');
	}
	_putchar('\n');
}

if (size <= 0)
	_putchar('\n');
}
