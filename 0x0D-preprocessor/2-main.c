#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the name of the file it was compiled from
 * Return: name of file
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
