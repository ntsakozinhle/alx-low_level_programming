#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creatse an array of chars and
 * initializes it with a specific char
 *
 * @size: size of array
 * @c: character to store in array
 *
 * Return:x or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}
