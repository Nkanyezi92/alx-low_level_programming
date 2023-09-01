#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: arguments
 * @argv: array 
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int a, b = 0, c = 0;
	char d[] = "Error", *fin_let;

	if (argc > 1)
	{
	for (a = 1; a < argc; a++)
	{
	fin_let = argv[a];
	while (*fin_let != 0)
	{
	if (*fin_let < 47 || *fin_let > 57)
	{
	printf("%s\n", d);
	return (1);
	}
	fin_let++;
	}
	c = atoi(argv[a]);
	b += c;
	}
	printf("%d\n", b);
	}
	else
		printf("%d\n", 0);
	return (0);
}
