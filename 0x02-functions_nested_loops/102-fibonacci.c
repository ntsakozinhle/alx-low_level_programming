#include <stdio.h>

/**
 * main - a program that writes the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int fibs;
	int p;

	printf("%d, ", fib1);

	for (p = 1; p < 50 ; p++)
	{
		printf("%d, ", fib2);

		fibs = fib1 + fib2;

		fib1 = fib2;
		fib2 = fibs;
	}
	printf("\n");
	return (0);
}
