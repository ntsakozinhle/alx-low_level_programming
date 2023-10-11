#include <stdio.h>

/**
 * main - a program that finds and prints the first 98
 * fibonacci numbers, starting with 1 and 2, followed by a new line
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int fib;

	printf("%lu, ", a);

	for (fib = 1 ; fib < 98 ; fib++)
	{
		printf("%lu", b);

		c = a + b;

		a = b;
		b = a;

		if (fib != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
