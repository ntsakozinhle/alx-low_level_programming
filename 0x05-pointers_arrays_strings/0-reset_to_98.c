#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value to 98
 *
 * @n: parameter to check pointer value
 *
 * Return: always 0
 */

void reset_to_98(int *n)
{
	int i;

	i = 98;
	{
		n = &i;
		putchar(*n + '0');
	}
}
