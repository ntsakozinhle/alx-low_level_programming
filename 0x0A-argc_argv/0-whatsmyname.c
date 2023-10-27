#include "main.h"
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line
 *
 * @argc: parameter for number of strings
 * @argv: parameter for array of strings
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0 ; i < argc ; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
