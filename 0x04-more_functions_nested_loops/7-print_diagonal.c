#include "main.h"

/**
 * print_diagonal - a function which draws a diagonal line
 * on the terminal
 *
 * @n: number of times '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int p, q;

		for (p = 0 ; p < n ; p++)
		{
			if (n > 1)

			for (q = 0 ; q < p ; q++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
