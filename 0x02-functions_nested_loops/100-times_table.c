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

	if (n >= 0 && n <= 15)
	{
		for (t = 0; t <= n ; t++)
		{
			_putchar('0');

			for (s = 1; s <= n; s++)
			{
				_putchar(',');
				_putchar(' ');

				result = t * s;

				if (result <= 99)
					_putchar(' ');

				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)

				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
