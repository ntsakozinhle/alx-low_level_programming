#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a list
 * @head: pointer to the head of list
 * @index: index of the node to retrieve, starting from 0
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
