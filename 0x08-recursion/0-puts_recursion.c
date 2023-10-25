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
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar('\n');
		_puts_recursion(s + 1);
	}
}
