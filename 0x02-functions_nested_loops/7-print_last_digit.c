#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * print_last_digit -prints the last digit of a number
 *
 * @b: parameter to be checked
 *
 * Return: Always 0
 */

int print_last_digit(int b)
{
	int m;

	m = b % 10;

	if (b < 0)
		m = -m;
	_putchar(m + '0');

	return (m);

}
