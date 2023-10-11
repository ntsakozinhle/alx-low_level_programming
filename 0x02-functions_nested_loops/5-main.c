#include "main.h"

/**
 * main - check your code.
 *
 * Return: Always 0
 */

int main(void)
{
	int p;

	p = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(p + '0');
	_putchar('\n');
	
	p = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(p + '0');
	_putchar('\n');
	
	p = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(p + '0');
	_putchar('\n');
	
	p = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(p + '0');
	_putchar('\n');
	
	return (0);
}
