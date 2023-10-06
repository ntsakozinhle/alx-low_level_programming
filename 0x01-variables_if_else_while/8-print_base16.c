#include <stdio.h>
/**
 * main - a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	char b;

	for (a = '0' ; a <= '9' ; a++)
		putchar(a);

	for (b = 'a' ; b <= 'f' ; b++)
		putchar(b);

	putchar('\n');

	return (0);
}
