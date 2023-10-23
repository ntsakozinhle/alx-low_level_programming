#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: parameter for memory pointer
 * @c: value to be store in pointer
 *
 * return: NULL
 */

char *_strchr(char *s, char c)
{
	int b;

	if (s == NULL)
	{
		return (NULL);
	}

	for (b = 0 ; s[b] != '\0' ; b++)
	{
		if (s[b] == c)
			return &s[b];
	}

	return (NULL);
}
