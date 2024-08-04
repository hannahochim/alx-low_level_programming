#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function prints all elements
 * @h: pointer to elements
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nd = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next, nd++;
	}
	return (nd);
}
