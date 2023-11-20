#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to start of list
 * @n: parameter for value to be passed
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head ==  NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;

	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

		return (0);
}
