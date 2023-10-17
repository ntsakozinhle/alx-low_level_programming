#include "main.h"

/**
 * puts_half - a function that prints half a string, followed
 * by a new line
 *
 * @str: parameter of string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int k;
	int n;
	int count = 0;

	for (k = 0 ; str[k] != '\0' ; k++)
		count++;
	n = (count - 1) / 2;

	for (k = n + 1 ; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
