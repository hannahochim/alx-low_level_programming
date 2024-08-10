#include "lists.h"

/**
 * add_dnodeint - function adds a new node
 * @head: head to node
 * @n: element of node
 * Return: address of newnode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ne_w;

	ne_w = malloc(sizeof(dlistint_t));

	if (ne_w == NULL)
	{
		return (NULL);
	}
	ne_w->n = n;
	ne_w->next = (*head);
	ne_w->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = ne_w;
	}
	(*head) = ne_w;

	return (ne_w);
}
