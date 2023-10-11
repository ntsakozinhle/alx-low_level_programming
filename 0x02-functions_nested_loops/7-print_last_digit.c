#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit -prints the last digit of a number
 *
 * @b: parameter to be checked
 *
 * Return: Always 0
 */

int print_last_digit(int b)
{
	int m = b % 10;

	printf("%d", m);
	return (0);
}
