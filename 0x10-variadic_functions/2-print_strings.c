#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - a function that prints strings
 * @separator: pointer for stored strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		printf("(nil)\n");
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil\n");
		}

		else
		{
			printf("%s", str);
		}

		if (i < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(args);

	printf("\n");
}
