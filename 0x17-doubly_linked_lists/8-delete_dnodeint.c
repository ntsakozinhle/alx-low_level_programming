#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of list
 * @head: pointer to the pointer to the head of list
 * @index: index of the node the should be deleted
 * Return: 1 if succeeded
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;

	free(temp);

	return (1);
}
