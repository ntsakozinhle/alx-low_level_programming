#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: pointer to the first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
