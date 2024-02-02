#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key in a hash array
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
