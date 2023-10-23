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
	unsigned int dest_size = sizeof(dest);

	if (dest_size == 0)
	{
		return (dest);
	}

	for (a = 0 ; a < n && src[a] != '\0' && a < dest_size - 1 ; a++)
	{
		dest[a] = src[a];
	}

		dest[a] = '\0';

	return (dest);
}
