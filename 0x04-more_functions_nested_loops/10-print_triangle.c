#include "main.h"

/**
 * print_triangle - a function that prints a triangle,
 * followed by a new line
 *
 * @size: number of times '#' will be printed
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int b;
	int d;

	if (size > 0)

	{
		for (b = 0 ; b < size ; b++)
		{
			for (d = 0 ; d < size ; d++)
			{
				if (d < size - (b + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
