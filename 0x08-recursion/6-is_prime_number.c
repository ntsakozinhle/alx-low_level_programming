#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that returns 1 if input
 * integer is a prime number
 *
 * @n: paramater for integer
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}

	else if (n / n == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
