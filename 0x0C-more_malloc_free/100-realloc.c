#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer value
 * @old_size: previouse assigned bytes
 * @new_size: newly assigned bytes
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size;
	unsigned int b;
	unsigned int *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	min_size = ((old_size < new_size) ? old_size : new_size);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (b = 0; b < min_size; b++)
	{
		((char *)new_ptr)[b] = ((char *)ptr)[b];
	}

	free(ptr);

	return (new_ptr);
}

