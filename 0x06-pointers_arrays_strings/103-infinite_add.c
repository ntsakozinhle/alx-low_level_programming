#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - reverse array
 *
 * @n: integer parameter
 *
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	while (j < 1)
	{
		temp = n[j];
		n[j] = n[i];
		n[i] = temp;
		j++;
		i--;
	}
}

/**
 * infinite_add - a function that adds two numbes
 *
 * @n1: first integer to add
 * @n2: second integer to add
 * @r: pointer to buffer
 * @size_r: buffer size
 *
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int k;
	int overflow = 0;
	int digits = 0;
	int val1, val2, temp_tot;

	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;
	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);

	for (k = 0 ; k < size_r ; k++)
		r[k] = '\0';

	i = 0;

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i >= 0)
			val1 = n1[i] - '0';

		else
			val1 = 0;

		if (j >= 0)
			val2 = n2[j] - '0';

		else
			val2 = 0;

		temp_tot = val1 + val2 + overflow;

		if (temp_tot >= 10)
			overflow = 1;

		else
			overflow = 0;

		if (digits >= (size_r - 1))
			return (0);

		r[digits] = (temp_tot % 10) + '0';
		digits++;
		j--;
		i++;
	}

	r[digits] = '\0';
	rev_string(r);

	return (r);
}
