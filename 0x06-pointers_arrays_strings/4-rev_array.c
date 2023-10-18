#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the content of
 * an array of integers
 *
 * @a: parameter for set of array
 * @n: parameter to be checked
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int rev;

	for (b = 0 ; b < n / 2 ; b++)
	{
		rev = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = rev;
	}
}
