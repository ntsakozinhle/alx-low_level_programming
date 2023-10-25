#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - a function that writes the length
 * of a string
 *
 * @s: paramter for string in pointer
 *
 * Return: s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s + '0');
		_strlen_recursion(s + 1);
	}
	return (*s);
}
