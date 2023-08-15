#include <stdio.h>
/**
  * main - print fibonacci sequence
  * Return: Nothing.
  */
int main(void)
{
	unsigned long w, x, y, z;

	x = 0;
	y = 1;
	for (w = 0; w < 50; w++)
	{
	k = x + y;
	x = y;
	y = z;
	printf("%lu", z);
	if (w == 49)
	putchar('\n');
	else
	{
	printf(", ");
	}
	}
	return (0);
}
