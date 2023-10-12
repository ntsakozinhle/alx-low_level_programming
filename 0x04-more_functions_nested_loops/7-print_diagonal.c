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
		_putchar('\n');

	else
	{
		int p;
		int q;

		for (p = 1; p <= n ; p++)
		{
			for (q = 0 ; q <= p ; q++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
