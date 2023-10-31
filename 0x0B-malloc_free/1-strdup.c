#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string
 *
 * @str: string to copy memory
 *
 * Return: pointer to memory
 */

char *_strdup(char *str)
{
	char *arr;
	int count = 0;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
		count++;

	arr = malloc(sizeof(char) * count + 1);

	if (arr == NULL)
		return (NULL);

	else
	{
		for (a = 0; str[a] != '\0'; a++)
			arr[a] = str[a];
		return (arr);
	}
}
