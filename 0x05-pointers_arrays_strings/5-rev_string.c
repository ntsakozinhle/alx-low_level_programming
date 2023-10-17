#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: parameter of string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int d;
	int count = 0;

	for (d = 0 ; s[d] != '\0' ; d++)
		count++;

	for (d = 0 ; d < count / 2 ; d++)
	{
		char f;

		f = s[d];
		s[d] = s[count - 1 - d];
		s[count - 1 - d] = f;
	}

}
