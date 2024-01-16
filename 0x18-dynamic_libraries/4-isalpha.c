#include "main.h"
#include <stdio.h>

/**
 * _isalpha -write a function that checks for alphabetic character
 *
 * @u: parameter to be checked
 *
 * Return: 1 or 0
 */

int _isalpha(int u)
{
	if ((u >= 'a' && u <= 'z') || (u >= 'A' && u <= 'Z'))
		return (1);

	else
		return (0);
}
