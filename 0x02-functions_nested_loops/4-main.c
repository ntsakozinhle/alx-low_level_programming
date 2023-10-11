#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int u;
	
	u = _isalpha('H');
	_putchar(u + '0');
	
	u = _isalpha('o');
	_putchar(u + '0');
       
	u = _isalpha(108);
	_putchar(u + '0');
	
	u = _isalpha(';');
	_putchar(u + '0');
	
	_putchar('\n');
	return (0);
}
