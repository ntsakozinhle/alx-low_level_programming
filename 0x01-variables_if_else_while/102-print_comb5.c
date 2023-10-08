#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all possible combinations
 * of two-digit numbers starting with 00
 *
 * Return: Always 0
 */

int main(void)

{
	int a;
	int b;
	int c;
	int d;

	for (a = '0' ; a < '9' ; a++)

	{
		for (b = a - 1 ; b <= '9' ; b++)

		{
			for (c = b - 1 ; c <= '9' ; c++)

			{
				for (d = c - 1 ; d <= '9' ; d++)

				{
					if (b != a && d !=c)

					{

						putchar(a);
						putchar(b);
						putchar(c);
						putchar(d);


					if (a == '9' && b == '9')
					continue;

					putchar(',');
					putchar(' ');

					}
		
				}

			}

		}

	}

	putchar('\n');
	return (0);

}
