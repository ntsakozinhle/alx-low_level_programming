#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all multiples
 * of 3 or 5, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
