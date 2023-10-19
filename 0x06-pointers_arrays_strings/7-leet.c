#include "main.h"
#include <stdio.h>
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

	for (b = 0 ; deep[b] != '\0' ; b++)
	{
		if ((deep[b] >= 'a' && deep[b] <= 'z') || (deep[b] >= 'A' && deep[b] <= 'Z'))
		{
			char c = deep[b];

			if (c == 'a' || c == 'A')
			{
				str[b] = '4';
			}

			else if (c == 'e' || c == 'E')
			{
				str[b] = '3';
			}

			else if (c == 'o' || c == 'O')
			{
				str[b] = '0';
			}

			else if (c == 't' || c == 'T')
			{
				str[b] = '7';
			}

			else if (c == 'l' || c == 'L')
			{
				str[b] = '1';
			}
		}
	}
	return (str);
}
