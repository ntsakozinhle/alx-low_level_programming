#include "main.h"

/**
 * print_numbers - a function that prints numbers, followed
 * by a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
		_putchar(x);
	_putchar('\n');

}
