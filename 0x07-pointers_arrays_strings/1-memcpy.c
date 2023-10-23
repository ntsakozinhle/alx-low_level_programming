#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: destination for string to be copied
 * @src: source string to copy
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
