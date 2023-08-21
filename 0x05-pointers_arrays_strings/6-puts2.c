#include "main.h"

/**
 * puts2 - Wentry pint.
 *
 * @s: pointer  to a char or string
 *
 *
 */

void puts2(char *s)
{
	int x;

	for (x	= 0; s[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(s[x]);
		}
	}
	_putchar('\n');
}
