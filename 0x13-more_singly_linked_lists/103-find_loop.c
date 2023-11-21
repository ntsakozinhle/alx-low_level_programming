#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: pointer to list
 * Return: address of the node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2;
	listint_t *old;

	p2 = head;
	old = head;

	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = old;
			old = p2;

			while (1)
			{
				p2 = old;

				while (p2->next != head && p2->next != old)
				{
					p2 = p2->next;
				}

				if (p2->next == head)
					break;
				head = head->next;
			}
			return (p2->next);
		}
	}
	return (NULL);
}
