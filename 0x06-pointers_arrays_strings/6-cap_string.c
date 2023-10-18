#include "main.h"
#include <stdio.h>

/**
 * cap_string- a function that capitalizes all words of a string
 *
 * @cap : parameter for string pointer
 *
 * Return: cap
 */

char *cap_string(char *cap)
{
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	int a;
	int b;

	for (a = 0 ; cap[a] != '\0' ; a++)
	{
		if (a == 0 && cap[a] >= 'a' && cap[a] <= 'z')
		{
			cap[a] = cap[a] - 32;
		}

		for (b = 0 ; c[b] != '\0' ; b++)
		{
			if (c[b] == cap[b] && (cap[a + 1] >= 'a' && cap[a + 1] <= 'z'))
			{
				cap[a + 1] = cap[a + 1] - 32;
			}
		}
	}

	return (cap);
}
