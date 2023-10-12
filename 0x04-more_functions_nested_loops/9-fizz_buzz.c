#include <stdio.h>

/**
 * main - write a program that prints Fizz/Buzz for multiples
 * of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1 ; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz ");
		}

		else if  (a % 5 == 0)
		{
			printf("Buzz ");
		}

		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		
		else
		{
			printf("%d ", a);
		}

	}
	return (0);
}
