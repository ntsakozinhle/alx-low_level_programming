#include <stdio.h>

/**
 * main - a program that findsand prints the sum of the even-valued
 * terms, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int max = 4000000;
	int fib1 = 1;
	int fib2 = 2;
	int fibo;
	int nacci = 2;

	while (fibo <= max)
	{
		fibo = fib1 + fib2;

		if (fibo % 2 == 0)
			nacci = nacci + fibo;

		fib1 = fib2;
		fib2 = fibo;
	}
	printf("%d\n", nacci);
	return (0);
}
