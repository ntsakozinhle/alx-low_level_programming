#include "lists.h"

/**
 * free_list2 - frees a linked list
 * @head: head of list
 * Return: void
 */

void free_list2(listd_t **head)
{
	listd_t *temp;
	listd_t *current;

	if (head != NULL)
	{
		current = *head;

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: ponter to list
 * Return: size of list free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listd_t *tree, *new, *add;
	listint_t *current;

	tree = NULL;

	while (*h != NULL)
	{
		new = malloc(sizeof(listd_t));

		if (new == NULL)
			exit(98);
		new->d = (void *)*h;
		new->next = tree;
		tree = new;

		add = tree;

		while (add->next != NULL)
		{
			add = add->next;

			if (*h == add->d)
			{
				*h = NULL;
				free_list2(&tree);
				return (node);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		node++;
	}

	*h = NULL;
	free_list2(&tree);
	return (node);
}
