#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - a function that converst a string to an integer
 *
 * @s: parameter to be checked
 *
 * Return: an int
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int m = 0;
	int min = 1;
	int tee = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{

			tee = 1;
			m = (m * 10) + (s[a] - '0');
			a++;
		}

		if (tee == 1)

		{
			break;
		}

		a++;

	}

	m *= min;
	return (m);
}
