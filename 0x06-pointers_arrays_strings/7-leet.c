#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * leet - a code that encodes a string into 1337
 *
 * @deep: parameter for encoded string
 *
 * Return: deep
 */

char *leet(char *deep)
{
	int b;
	int d;

	const char *leetChars = "aAeEoOtTlL";
	const char *leetReplace = "4433007711";

	for (b = 0 ; deep[b] != '\0' ; b++)
	{
		for (d = 0 ; leetChars[d] != '\0' ; d++)
		{
			if (deep[b] == leetChars[d])
			{
				deep[b] = leetReplace[d];

			}
		}
	}
	return (deep);
}
