#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - a function that searches for any set of bytes
 *
 * @s: parameter for memory pointer
 * @accept: parameter for values to be stored in memory pointer
 *
 * Return: count
 */

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
