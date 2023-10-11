#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * jack_bauer - a function that prints every minute of the day of
 * Jack Bauer
 *
 * @min: parameter to check
 * @hr: parameterto check
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr < 24)

	{
		while (min < 60)

		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');

			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}

		min = 0;
		hr++;
	}

}
