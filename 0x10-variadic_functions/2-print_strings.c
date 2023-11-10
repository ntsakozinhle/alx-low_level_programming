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
	va_list point;

	if (separator == NULL)
	{
		printf("(nil)\n");
		return;
	}

	va_start(point, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(point, const char *);

		if (str == NULL)
		{
			printf("(nil)\n");
		}

		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(point);
}
