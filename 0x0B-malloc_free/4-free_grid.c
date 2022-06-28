#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-d grid
 * @grid: 2-d array of integers to free
 * @height: height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (height--; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
