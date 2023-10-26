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
	int len = 0;

	if (s == NULL || *s == '\0')
	{
		return (1);
	}

	while (s[len] != '\0')
	{
		len++;
	}

	return (palindrome_recursive(s, 0, len - 1));
}

/**
 * palindrome_recursive - check if string is a palindrome
 *
 * @s: parameter for string
 * @srt: start of string
 * @end: end of string
 *
 * Return: palidrome
 */

int palindrome_recursive(char *s, int srt, int end)
{
	if (srt >= end)
	{
		return (1);
	}

	if (s[srt] != s[end])
	{
		return (0);
	}

	return (palindrome_recursive(s, srt + 1, end - 1));

}
