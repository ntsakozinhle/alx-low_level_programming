#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments
 *
 * @argc: parameter to be checked
 * @argv: parameter to be checked
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
