#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - function that frees a 2 dimensional grid previously created by
* your alloc_grid function.
* @grid: the address of the two dimensional grid
* @height: height of the grid
**/

void free_grid(int **grid, int height)
{
	int h = 0;

	for (; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
