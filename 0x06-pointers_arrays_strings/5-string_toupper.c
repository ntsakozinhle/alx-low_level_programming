#include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 *
 * @str: parameter for existing pointer variable
 *
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	char *old = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (old);
}
