#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function returns a pointer to a 2 dimensiona
 * arry of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer value
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int b, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int) * height);

	if (output == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		output[b] = malloc(sizeof(int) * width);

		if (output[b] == NULL)
		{
			free(output);

			for (d = 0; d <= height; d++)
				free(output[d]);
			return (NULL);
		}

		for (d = 0; d < width; d++)
			output[b][d] = 0;
	}
	return (output);
}
