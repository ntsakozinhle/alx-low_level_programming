#include "lists.h"

/**
 * free_list - free linked list
 * @head: head of list
 * Return: void
 */

void free_list(listd_t **head)
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
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listd_t *tree, *new, *add;

	tree = NULL;


	while (head != NULL)
	{
		new = malloc(sizeof(listd_t));

		if (new == NULL)
			exit(98);

		new->d = (void *)head;
		new->next = tree;
		tree = new;

		add = tree;

		while (add->next != NULL)
		{
			add = add->next;

			if (head == add->d)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&tree);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_list(&tree);
	return (node);
}
