#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints the alphabet
 * in lowercase, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)

{
	int a;

	for (a = 'a'; a <= 'z' ; a++)
	putchar(a);
}

int main(void)

{
	print_alphabet();
	putchar('\n');
	return (0);
}
