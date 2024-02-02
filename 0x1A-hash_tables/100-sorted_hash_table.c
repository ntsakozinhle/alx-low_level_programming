#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: the size of the array
 * Return: a pointer to the newly created soreted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds or updates an element in sorted hash table
 * @ht: sorted hash table
 * @key: the key
 * @value: the value associated with the key (duplicated
 * Return: 1 if successful
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node, *prev_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->shead;
	prev_node = NULL;
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		else if (strcmp(current_node->key, key) > 0)
		{
			new_node = malloc(sizeof(shash_node_t));
			if (new_node == NULL)
				return (0);

			new_node->key = strdup(key);
			new_node->value = strdup(value);
			if (new_node->key == NULL || new_node->value == NULL)
			{
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (0);
			}

			new_node->next = current_node;
			new_node->sprev = prev_node;
			new_node->snext = current_node->snext;

			if (prev_node)
				prev_node->snext = new_node;
			else
				ht->shead = new_node;

			if (current_node->snext)
				current_node->snext->sprev = new_node;
			else
				ht->stail = new_node;

			return (1);
		}

		prev_node = current_node;
		current_node = current_node->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	new_node->sprev = ht->stail;
	new_node->snext = NULL;

	if (ht->stail)
		ht->stail->snext = new_node;
	else
		ht->shead = new_node;

	ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key in the sorted
 * hash table
 * @ht: sorted hash table
 * the key
 * Return: the value associated with the element
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the sorted hash table
 * Returns: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	current_node = ht->shead;

	printf("{");
	while (current_node)
	{
		printf("'%s: '%s'", current_node->key, current_node->value);
		if (current_node->snext)
			printf(", ");
		current_node = current_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_rev - prints sorted hash table in reverse
 * @ht: sorted hash table
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	current_node = ht->stail;

	printf("{");
	while (current_node)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		if (current_node->sprev)
			printf(", ");
		current_node = current_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: sorted hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current_node, *temp_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			temp_node = current_node;
			current_node = current_node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}

	free(ht->array);

	current_node = ht->shead;
	while (current_node)
	{
		temp_node = current_node;
		current_node = current_node->snext;
		free(temp_node->key);
		free(temp_node->value);
		free(temp_node);
	}

	free(ht);
}
