#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 *
 * @s: parameter for string in pointer
 *
 * Return: 1
 */

int is_palindrome(char *s)
{
	if (s == NULL)
	{
		return (is_palindrome(s + 1));
	}

	else
	{
		return (0);
	}
}
