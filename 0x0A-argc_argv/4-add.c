#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that addspositive numbers
 *
 * @argc: paramater for c strings
 * @argv: vextor for strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int a;
	int b;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		b = 0;
		num = 0;

		while (argv[a][b] != '\0')
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}

			num = num * 10 + (argv[a][b] - '0');
			b++;
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
