#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int i = 0;
	char c[] = "Error";

	if (argc != 3)
	{
	printf("%s\n", c);
	return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", i);
	return (0);
}
