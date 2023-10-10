#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
}
