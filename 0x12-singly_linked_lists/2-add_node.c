#include "lists.h"

/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer for start of list
 * @str: string to be passed to node
 * Return: the head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i;
	int count = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str); /* duplicates str */
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
