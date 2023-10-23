#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: parameter for memory pointer
 * @c: value to be store in pointer
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		s++;
	}
	return (s);
}
