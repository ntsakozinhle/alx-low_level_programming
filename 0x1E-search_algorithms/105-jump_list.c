#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly list
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: A pointer the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *prev, *curr;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	prev = NULL;
	curr = list;

	while (curr != NULL && curr->n < value)
	{
		prev = curr;
		for (i = 0; curr->next != NULL && i < jump; i++)
			curr = curr->next;

		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);
	for (; prev != NULL && prev->index <= curr->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
