#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - a function that searches for any set of bytes
 *
 * @s: parameter for memory pointer
 * @accept: parameter for values to be stored in memory pointer
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int count = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (s);
}
