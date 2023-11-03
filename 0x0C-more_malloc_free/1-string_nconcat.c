#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: parameter for string 1
 * @s2: parameter for sting 2
 * @n: parameter to be checked
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1len = 0;
	unsigned int a;
	char *output;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		s1len++;

	output = malloc(sizeof(char) * (s1len + n) + 1);

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
