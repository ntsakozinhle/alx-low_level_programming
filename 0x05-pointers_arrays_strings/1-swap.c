#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of
 * two integers
 *
 * @a: parameter for integer 1
 * @b: parameter for integer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
