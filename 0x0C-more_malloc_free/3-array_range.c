#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int num_elements;
	int *arr;
	int a;

	if (min > max)
		return (NULL);

	num_elements = (max - min) + 1;

	arr = malloc(num_elements * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < num_elements; a++)
		arr[a] = min + a;

	return (arr);
}
