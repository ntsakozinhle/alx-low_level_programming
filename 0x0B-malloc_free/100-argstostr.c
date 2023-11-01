#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments
 * of the program
 *
 * @ac: variable for argument
 * @av: pointer variable
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int acavlen = 0;
	int add = 0;
	int a;
	char *output;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		acavlen += strlen(av[a]) + 1;
	}

	output = (char *)malloc(acavlen + 1);

	if (output == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		strcpy(output + add, av[a]);
		add += strlen(av[a]);
		output[add] = '\n';
		add++;
	}

	output[acavlen] = '\0';

	return (output);
}
