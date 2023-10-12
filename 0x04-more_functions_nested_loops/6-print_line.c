#include "main.h"

/**
 * print_line - a function that draws a straight line in
 * the terminal
 *
 * @n: parameter to be checked
 *
 * Return: void
 */

void print_line(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int d;

		for (d = 1 ; d <= n ; d++)
			_putchar('_');
		_putchar('\n');
	}
}
