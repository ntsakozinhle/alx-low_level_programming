#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - a function that prints everything
 * @format: lists all arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int b, check_stat; /* declare variables */
	char *str;
	va_list print;

	va_start(print, format); /* initialize */
	b = 0;
	while (format != NULL && format[b] != '\0')
	{
		switch (format[b])
		{
			case 'i':
				printf("%d", va_arg(print, int));
				check_stat = 0; /* check conditions */
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(print, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(print, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[b + 1] != '\0' && check_stat == 0)
			printf(", ");
		b++;
	}
	printf("\n");
	va_end(print);
}
