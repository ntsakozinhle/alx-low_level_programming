#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 *
 * @n: parameter to be checked
 * @a: pointer value
 *
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0 ; g < n ; g++)
	{
		printf("%u", a[n]);

		if (g != n - 1)
			printf(", ");
	}
	printf("\n");
}
