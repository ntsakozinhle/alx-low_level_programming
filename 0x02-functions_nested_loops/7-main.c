#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main- check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int b;

	print_last_digit(98);
	print_last_digit(0);
	b = print_last_digit(-1024);
	_putchar('0' + b);
	
	_putchar('\n');
	return (0);
}
