#include <stdio.h>
/**
 * main - a program that writes the lowercase
 * alphabet in reverse, followed by a new line
 *
 * cannot use printf or puts
 *
 * Return: Always 0
 */

int main(void)
{
	char ahpla;

	for (ahpla = 'z' ; ahpla <= 'a' ; ahpla--)
		putchar(ahpla);

	putchar('\n');

	return (0);
}
