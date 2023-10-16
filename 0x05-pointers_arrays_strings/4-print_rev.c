#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string in revers
 * followed by a new line
 *
 * @s: parameter for string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0 ; x < s ; x++)
	{
		_putchar(s[x]);

		char ver;

		for (y = 0 ; x < y ; x++)
		{
			ver = s[x];
			s[x] = s[y];
			s[y] = ver;
			y--
		}
	}
	_putchar('\n');
}
