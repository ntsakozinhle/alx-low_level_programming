#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at given index
 * @n: bit to be converted
 * @index: position of bit
 * Return: 1 if succesful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int net;

	net = 1;
	net = net << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = net ^ *n;

	return (1);
}
