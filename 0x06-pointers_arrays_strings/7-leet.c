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
	char *str = deep;
	int b;

	const char *leetChars = "aAeEoOtTlL";
	const char *leetReplacements = "4433007711";

	for (b = 0 ; deep[b] != '\0' ; b++)
	{
		char c = deep[b];

		if (isalpha((unsigned char)c))
		{
			const char *foundChar = strchr(leetChars, c);

			if (foundChar != NULL)
			{
				char replacement = leetReplacements[foundChar - leetChars];

				str[b] = replacement;

			}
		}
	}
	return (str);
}
