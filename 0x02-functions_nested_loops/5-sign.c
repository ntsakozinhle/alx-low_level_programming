#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of the number
 *
 * @p: parameter to check
 *
 * Return: returns 1, 0 , -1
 */

int print_sign(int p)
{
	if (p > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (p == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
