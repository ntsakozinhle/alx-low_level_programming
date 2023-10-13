#include <stdio.h>

/**
 * main - write a program that prints Fizz/Buzz for multiples
 * of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1 ; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		printf("%s", "FizzBuzz");

		else if (a % 3 == 0)
		printf("%s", "Fizz");

		else if (a % 5 == 0)
		printf("%s", "Buzz");

		else
		printf("%d", a);

		if (a != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
