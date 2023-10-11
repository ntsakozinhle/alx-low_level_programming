#include <stdio.h>

/**
 * main - a program that writes the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	long int fibs;
	int p;

	printf("%li, ", fib1);

	for (p = 1; p < 50 ; p++)
	{
		printf("%li, ", fib2);

		fibs = fib1 + fib2;

		fib1 = fib2;
		fib2 = fibs;
	}
	printf("\n");
	return (0);
}
