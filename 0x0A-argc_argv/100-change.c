#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of
 * coins to make change
 *
 * @argc: paramter for number of strings
 * @argv: vector for strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{int cents = atoi(argv[1]);

	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5; b++)
	{
		while (cents >= coins[b])
		{
			cents -= coins[1];
			count++;
		}
	}
	printf("%d\n", count);
		return (0);
}
