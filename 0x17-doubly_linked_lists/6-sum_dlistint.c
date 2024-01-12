#include "lists.h"

/**
 * sum_dlistint - returns the summ of all elements in list
 * @head: pointer to the head of list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
