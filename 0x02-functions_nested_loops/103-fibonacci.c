#include <stdio.h>

/**
 * main - a program that findsand prints the sum of the even-valued
 * terms, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	long int max = 4000000;
	long int fib1 = 1;
	long int fib2 = 2;
	long int fibo;
	long int nacci = 2;

	while (fibo <= max)
	{
		fibo = fib1 + fib2;

		if (fibo % 2 == 0)
			nacci = nacci + fibo;

		fib1 = fib2;
		fib2 = fibo;
	}
	printf("%li\n", nacci);
	return (0);
}
