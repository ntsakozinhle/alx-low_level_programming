#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table,
 * starting with 0.
 *
 * @n: parameter to be checked
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int t;
	int s;
	int result;

	for (t = n ; t < 15 ; t++)
	{
		for (s = n ; s < 15 ; s++)
		{
			result = t * s;

			if (!(n > 15) || (n < 0))
			{
				printf("%2d, ", result);

				if (n != 15)
					printf(", ");
			}
		}
		printf("\n");
	}
}
