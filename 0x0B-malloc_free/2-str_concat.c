#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: parameter for string 1
 * @s2: parameter for string 2
 *
 * Return: pointer to newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int a;
	char *output;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		s1len++;

	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (output == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		output[a] = s1[a];

	for (a = 0; s2[a] != '\0'; a++)
	{
		output[s1len] = s2[a];
		s1len++;
	}

	output[s1len] = '\0';

	return (output);
}
