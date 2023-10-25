#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: parameter for integer
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n / n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n / _sqrt_recursion(n / n));
	}
}
