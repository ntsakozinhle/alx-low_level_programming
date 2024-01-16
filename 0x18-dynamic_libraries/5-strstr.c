#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - write a function thatloactes a substring
 *
 * @needle: parameter to be checked
 * @haystack: parameter to be checked
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	while (*haystack != '\0')
	{
		char *find = needle;
		char *in_a = haystack;

		while (*find != '\0' && *in_a == *find)
		{
			in_a++;
			find++;
		}

		if (*find == '\0')
		{
			return (haystack);
		}
			haystack++;

	}
	return (NULL);
}
