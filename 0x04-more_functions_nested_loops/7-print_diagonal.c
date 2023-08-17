#include "main.h"

/**
*print_diagonal - prints diag
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int x, y;
if (n > 0)
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
_putchar(' ');

_putchar('\\');

if (x == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
