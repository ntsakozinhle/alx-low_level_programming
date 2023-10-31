#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: parameter for width
 * @height: parameter rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int b;

	if (grid == NULL)
		return;

	for (b = 0; b < height; b++)
	{
		if (grid[b] != NULL)
		{
			free(grid[b]);
			grid[b] = NULL;
		}
	}

	free(grid);
}
