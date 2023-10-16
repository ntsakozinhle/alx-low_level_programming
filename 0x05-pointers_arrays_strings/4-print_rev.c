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
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	for (x = count - 1 ; x >= 0 ; x--)
		_putchar(s[x]);
	_putchar('\n');

}
