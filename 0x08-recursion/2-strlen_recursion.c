#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen_recursion - a function that writes the length
 * of a string
 *
 * @s: paramter for string in pointer
 *
 * Return: a
 */

int _strlen_recursion(char *s)
{
	int a;

	a = _strlen_recursion(s + 1);
	printf("%d", a);

	return (a);
}
