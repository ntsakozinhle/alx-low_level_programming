#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * follwed by a new line
 *
 * @s: parameter for string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		printf("%d\n", s[a]);
	}
}
