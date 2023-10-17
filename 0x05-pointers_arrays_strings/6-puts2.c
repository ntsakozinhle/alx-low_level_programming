#include "main.h"

/**
 * puts2 - a function tat prints every other charachter of a string
 * starting with the fist character, followed by a new line
 *
 * @str: parameter to be checked
 *
 * Return: void
 */

void puts2(char *str)
{
	int b;

	for (b = 0 ; str[b] != '\0' ; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}
