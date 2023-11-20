#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * linked listint_t list
 * @h: parameter for pointer to list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
