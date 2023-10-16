#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - a function that returns the length of
 * a string
 *
 * @s: parameter for string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int t;
	int count = 0;

	for (t = 0; s[t] != '\0' ; t++)
		count++;

	return (count);

}
