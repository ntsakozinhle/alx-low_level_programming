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
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int a;
	char *output;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0' && s2len < n)
		s2len++;

	output = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (output == NULL)
		return (NULL);

	for (a = 0; a < s1len; a++)
		output[a] = s1[a];

	for (a = 0; a < s2len; a++)
		output[s1len + a] = s2[a];

	output[s1len + s2len] = '\0';

	return (output);
}
