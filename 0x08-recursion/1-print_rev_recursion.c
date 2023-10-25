#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: parameter for string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;

		if (*s < count / 2)
		{
			int d;

			d = *s;
			*s = s[count - 1 - d];
			s[count - 1 - d] = d;
		}
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}

	else
	{
		_putchar('\n');
	}
}
