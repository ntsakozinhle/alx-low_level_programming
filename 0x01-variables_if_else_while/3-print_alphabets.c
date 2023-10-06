#include <stdio.h>
/**
 * main - a program that prints the alphabet
 * in lowercase and then in uppercase, followed
 * by a new line
 *
 * cannot us printf and puts
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;
	char BET;
	
	for(alpha = 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);

	for(BET = 'A' ; BET <= 'Z' ; BET++)
		putchar(BET);
	
	putchar('\n');

	return (0);
}
