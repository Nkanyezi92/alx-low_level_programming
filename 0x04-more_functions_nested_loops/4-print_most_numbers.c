#include "main.h"

/**
 *print_most_numbers - print 0-9
 *
 *Return:always 0
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
	if (i != 4 && i != 2)
	_putchar(i + '0');
}
	_putchar('\n');
}
