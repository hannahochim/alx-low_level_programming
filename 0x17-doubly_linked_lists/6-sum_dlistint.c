#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @head: head of node
 * Return: 0 on success
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (s);
	}

	temp = head;
	while (temp != 0)
	{
		s += temp->n;
		temp = temp->next;
	}

	return (s);
}
