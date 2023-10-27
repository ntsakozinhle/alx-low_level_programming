#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program should print a number, followed by a
 * a new line
 *
 * @argc: parameter for number of strings
 * @argv: parameter for number of strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (num != 0 || (num == 0 && argv[i][0] == '0'))
			{
				printf("%d\n", num);
			}
			else
			{
				printf("%s\n", argv[i]);
			}
		}
	}
	return (0);
}
