#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array
 * @size: Number of element in the array
 * @value: value to search for
 *
 * Return: the index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev += step;
		if (prev >= (int)size)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);
	for (i = prev - step; i <= prev && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
