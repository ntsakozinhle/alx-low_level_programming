#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at given index
 * @n: pointer to bit to be converted
 * @index: position of bit
 * Return: 1 if successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int net;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	net = 1;
	net = net << index;
	*n = ((*n) | net);

	return (1);
}
