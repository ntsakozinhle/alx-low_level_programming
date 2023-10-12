#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for an upper case character
 *
 * @c: parameter to be checked
 *
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
