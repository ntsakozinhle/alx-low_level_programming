#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list
 * @value: The value to search for
 *
 * Return: A pointer to the first node
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *curr;

	if (list == NULL)
		return (NULL);

	while (prev->express && prev->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->express->index, prev->express->n);
		prev = prev->express;
	}

	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	curr = prev;

	while (curr && curr->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		curr = curr->next;
	}

	if (curr && curr->n == value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);
		return (curr);
	}

	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);
		return (NULL);
	}
}
