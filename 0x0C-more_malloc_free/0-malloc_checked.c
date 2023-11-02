#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: parameter to be checked
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *out;

	out = malloc(b);

	if (out == NULL)
		exit(98);

	else
		return (out);
}
