#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function as
 * a parameter on each element of an array
 * @array: parameter for array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
