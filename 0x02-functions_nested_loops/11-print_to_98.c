#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - a function that prints all natural numbers from n
 * to 98, followed by a new line
 *
 * @n: parameter 1 to be checked
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int q;

	if (n >= 0 && n <= 98)
	{
		for (q = n ; q <= 98 ; q++)
		{
			printf("%d", q);

			if (q != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (q = n ; q <= 98 ; q++)
		{
			printf("%d", q);

			if (q != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (q = n ; q >= 98 ; q--)
		{
			printf("%d", q);

			if (q != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
