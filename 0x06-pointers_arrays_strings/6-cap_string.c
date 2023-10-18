#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string- a function that capitalizes all words of a string
 *
 * @cap : parameter for string pointer
 *
 * Return: cap
 */

char *cap_string(char *cap)
{
	int a;
	int b;

	for (a = 0 ; cap[a] != '\0' ; a++)
	{
		if (a == 0 && islower((unsigned char)cap[a]))
		{
			cap[a] = toupper((unsigned char) cap[a]);
		}

		for (b = 0 ; b < 13 ; b++)
		{
			if (cap[a - 1] == cap[b] && islower((unsigned char)cap[a]))
			{
				cap[a] = toupper((unsigned char)cap[a]);
			}
		}
	}

	return (cap);
}
