#include "main.h"
#include <stdio.h>

/**
 * main - a program should print a number, followed by a
 * a new line
 *
 * @argc: parameter for number of strings
 * @argv: parameter for number of strings
 *
 * Return: void
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
