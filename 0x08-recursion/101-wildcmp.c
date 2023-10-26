#include "main.h"
#include <stdio.h>

/**
 * wildcmp - a function that compares two strings
 *
 * @s1: parameter to be checked string to be compared
 * @s2: parameter to be checked string to be compared
 *
 * Return: 1
 */

int wildcmp(char *s1, char *s2)
{
	int option1 = wildcmp(s1, s2 + 1);
	int option2 = (*s1 != '\0') && wildcmp(s1 + 1, s2);

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		return (option1 || option2);
	}

	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);

}
