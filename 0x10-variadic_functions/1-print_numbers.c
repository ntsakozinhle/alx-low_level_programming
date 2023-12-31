#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: parameter for string
 * @n: number of integers being passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	int str;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, int);

		printf("%d", str);

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
