#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * @head: pointer to the lsit
 * @index: node postion to be recalled
 * Return: pointer to recalled node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
