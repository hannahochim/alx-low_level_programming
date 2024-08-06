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
	if (p == NULL)
	{
		return (current);
	}

	while (p != NULL)
	{
		printf("%d\n", p->n);
		current++;
		p = p->next;
	}

	return (current);
}
