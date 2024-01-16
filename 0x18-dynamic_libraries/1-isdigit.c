#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that checks for a digit
 *
 * @c: parameter to be checked
 *
 * Return: 1 and 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
