#include <stdio.h>
/**
 * main - a program that printf all possible combinations
 * of single-digit numbers
 *
 * only putchar can be used
 *
 * Return: Always (0)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10 ; a++)
		
	{
		if (a == 9)
			putchar(a + '0');
		else
		{	
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
