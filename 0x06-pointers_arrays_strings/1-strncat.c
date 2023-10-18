#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest : destination string
 * @src : source string
 * @n : max parameter for src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int a;

	for (a = 0 ; dest[a] != '\0' ; a++)
		destlen++;

	for (a = 0 ; src[a] != '\0' && a < n ; a++)
		srclen++;

	for (a = 0 ; a < srclen ; a++)
		dest[destlen + a] = src[a];

	dest[destlen + srclen] = '\0';

	return (dest);
}
