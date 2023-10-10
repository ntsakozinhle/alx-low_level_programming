#include <stdio.h>
#include <string.h>

/**
 * main - a program that prints _putchar, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')

	{
		putchar(str[i]);
		i++;
	}

	return (0);
}
