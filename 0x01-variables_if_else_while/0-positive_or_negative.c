#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this program will assign a random number
 * to variable n and determine whether n is
 * positive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is a positive\n", n);
	}

	if (n < 0)
	{
		printf("%d is a negative\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
