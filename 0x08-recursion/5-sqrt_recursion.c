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
	if (n < 0)
	{
		return (-1);
	}

	return (_find_sqrt(n, 1, n));
}

/**
 * _find_sqrt - prototype to find square root of integer
 *
 * @n: parameter to check
 * @low: parameter to check
 * @high: parameter to check
 *
 * Return: int values
 */

int _find_sqrt(int n, int low, int high)
{
	int mid = low + (high - low) / 2;
	int square = mid * mid;

	if (low > high)
	{
		return (high);
	}

	if (square == n)
	{
		return (mid);
	}

	else if (square < n)
	{
		return (_find_sqrt(n, mid + 1, high));
	}

	else
	{
		return (_find_sqrt(n, low, mid - 1));
	}
}
