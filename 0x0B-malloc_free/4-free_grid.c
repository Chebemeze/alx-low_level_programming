#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory space allocated to the grid
 * @grid: address of the grid.
 * @height: height of the grid.
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
