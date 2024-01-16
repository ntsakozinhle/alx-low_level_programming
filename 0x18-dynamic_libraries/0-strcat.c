#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @src : source string
 * @dest : destination string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int a;

	/**
	 * keeps track of number of characters
	 */
	for (a = 0 ; dest[a] != '\0' ; a++)
		destlen++;

	for (a = 0 ; src[a] != '\0' ; a++)
		srclen++;

	for  (a = 0 ; a <= srclen ; a++)
		dest[destlen + a] = src[a];

	return (dest);
}
