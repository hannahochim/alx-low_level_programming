#include "lists.h"

/**
 * add_nodeint - add new node to beginnig of list
 * @head: pointer
 * @n: integer
 * Return: the list with the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
