#include "lists.h"

/**
 * print_dlistint - function prints out elements of
 * doubly linked list
 * @h: head node
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t current;

	current = 0;
	if (h == NULL)
	{
		return (current);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		current++;
		h = h->next;
	}

	return (current);
}
