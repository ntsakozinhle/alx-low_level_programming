#include "main.h"

/**
 * print_square - a function that prints a square, followed
 * by a new line
 *
 * @size: number of times '#' will be printed
 *
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');

	else
	{
		int b, d;

		for (b = 1 ; b <= size ; b++)
		{
			for (d = 1 ; d <= size ; d++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
