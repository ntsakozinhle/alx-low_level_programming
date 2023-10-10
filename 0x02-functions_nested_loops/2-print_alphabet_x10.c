#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints the alphabet
 * in lowercase 10 times, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char x;

	{
		int count = 0;

		while (count < 11)

		{
			for (x = 'a' ; x <= 'z' ; x++)
			putchar(x);
			count++;
		}

	}

	putchar('\n');
}
