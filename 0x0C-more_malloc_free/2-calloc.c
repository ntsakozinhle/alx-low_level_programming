#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array,
 * using malloc
 * @nmemb: parameter for string
 * @size: determine size of string
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);

	if (output == NULL)
		return (NULL);

	else
		return (output);
}
