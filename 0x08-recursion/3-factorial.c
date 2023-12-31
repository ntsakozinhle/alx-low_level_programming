#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: paramter for inputed integer
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
