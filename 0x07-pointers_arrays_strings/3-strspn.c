#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - a function that gets the legth of a prefix substring
 *
 * @s: parameter to check
 * @accept: parameter to check
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
