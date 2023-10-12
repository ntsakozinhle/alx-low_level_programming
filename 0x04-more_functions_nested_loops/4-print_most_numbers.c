#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - write a function that prints numbers,
 * followed by a new line, exclude 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int p;

	for (p = 0 ; p <= 9 ; p++)
	{
		if (p != 2 && p != 4)
			_putchar(p + '0');
	}
	_putchar('\n');
}
