#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - write a program that prints the alphabet
 * in lowercase 10 times, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char x;

	{
		int count = 0;

		while (count < 10)

		{
			for (x = 'a' ; x <= 'z' ; x++)
			putchar(x);
			putchar('\n');
			count++;
		}


	}

}
