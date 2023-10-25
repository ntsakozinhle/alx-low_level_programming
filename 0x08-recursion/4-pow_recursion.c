#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 *
 * @x: parameter for integer 1
 * @y: parameter for integer 2
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y > 0)
	{
		return (1 + _pow_recursion(x, y));
	}

	else
	{
		return (0);
	}
}
