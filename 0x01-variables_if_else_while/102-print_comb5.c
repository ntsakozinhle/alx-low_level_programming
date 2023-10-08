#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all possible combinations
 * of two-digit numbers starting with 00
 *
 * Return: Always 0
 */

int main(void)

{
	int a;
	int b;

	for (a = '0' ; a < '9' ; a++)

	{
		for (b = a ; b <= '9' ; b++)

		{
			if (b != a)

			{
				putchar(a);
				putchar(b);

				if (a == '9' && b == '9')
				continue;

				putchar(',');
				putchar(' ');

			}
		}
	}

	putchar('\n');
	return (0);

}
