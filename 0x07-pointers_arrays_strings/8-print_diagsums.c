#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: parameter to be checked
 * @size: parameter to be checked
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int d;

	for (d = 0 ; d < size ; d++)
	{
		sum1 += a[d * size + d];
		sum2 += a[d * size + (size - 1 - d)];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
