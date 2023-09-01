#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum coins to make change for an amount of money.
 * @argc: arguments
 * @argv: array 
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int x = 0, y = 0;
	char c[] = "Error";

	if (argc != 2)
	{
	printf("%s\n", c);
	return (1);
	}
	x = atoi(argv[1]);
	while (x >= 25)
	{
	x -= 25;
	y++;
	}
	while (x >= 10)
	{
	x -= 10;
	y++;
	}
	while (x >= 5)
	{
	x -= 5;
	y++;
	}
	while (x >= 2)
	{
	x -= 2;
	y++;
	}
	if (x == 1)
	y++;
	printf("%d\n", y);
	return (0);
}
