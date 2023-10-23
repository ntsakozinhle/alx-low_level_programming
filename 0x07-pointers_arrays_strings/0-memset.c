#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _memset - a function that fills a memory with a constant byte
 *
 * @s: parameter for memory pointer
 * @b: contsant byte value
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	if (s == NULL || n == 0)
	{
		return (s);
	}

	for (a = 0 ; a < n ; a++)
	{
		s[a] = b;
	}

	return (s);
}
