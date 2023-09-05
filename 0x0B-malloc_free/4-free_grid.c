#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Input
 *@grid: rows 
 *@height: columns 
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int x;
	int *y;

	for (x = 0; x < height; x++)
	{
	y = grid[x];
	free(y);
	}
	free(grid);
}
