#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get one number to another
 * @n: first int to compare
 * @m: second int to compare
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int results;
	unsigned long int count;

	results = n ^ m;

	for (count = 0; results > 0; )
	{
		if ((results & 1) == 1)
			count++;

		results = results >> 1;
	}
	return (count);
}
