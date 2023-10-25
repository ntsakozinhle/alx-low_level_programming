#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that returns 1 if input
 * integer is a prime number
 *
 * @n: paramater for integer
 *
 * Return: find_prime
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}

	return (find_prime(n, 2));
}

/**
 * find_prime - prototype too find prime numbers
 *
 * @n: parameter to check
 * @div: parameter to check
 *
 * Return: find_prime
 */

int find_prime(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}

	return (find_prime(n, div + 1));
}
