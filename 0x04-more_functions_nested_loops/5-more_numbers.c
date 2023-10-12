#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints the numbers from 0 to 14
 * 10 times, followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int r;
	int count = 0;

	while (count < 10)

	{
		for (r = 0 ; r < 15 ; r++)
		{
			if (r > 9)
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
		}
	_putchar('\n');
	count++;
	}
}
