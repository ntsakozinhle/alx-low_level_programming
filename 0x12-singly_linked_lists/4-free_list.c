#include "lists.h"

/**
 * free_list - a function that frees a linked list
 * @head: pointer to the first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
