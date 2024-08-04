#include "lists.h"

/**
 * sum_listint - Sums lists
 * @head: head nodo
 *
 * Return: returns sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			s += head->n;
			head = head->next;
		}
		s += head->n;
		return (s);
	}
	return (s);
}
