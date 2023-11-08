#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: parameter for name to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

	else
	{	
		f(name);
	}
}
