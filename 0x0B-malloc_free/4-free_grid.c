#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - do frees 2d array
 * @grid: as in 2d grid
 * @height: as in height dimension of grid
 * Description: do frees memory of grid
 * Return: do nothing
 *
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
