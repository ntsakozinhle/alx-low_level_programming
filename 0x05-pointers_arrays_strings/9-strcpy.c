#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to the src,
 * including the terminating null byte
 * @dest: parameter for pointer copy
 * @src: parameter to be checked
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int h;

	for (h = 0 ; src[h] != '\0' ; h++)
		dest[h] = src[h];
	dest[h] = '\0';

	return (dest);
}
