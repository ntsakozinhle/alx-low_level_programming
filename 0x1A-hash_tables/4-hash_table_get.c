#include "hash_tables.h"

/**
 * has_table_get - Retrieves a value associated with a key in the hash table
 * @ht: The hash table
 * @key: the key
 * Return: the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return(current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
