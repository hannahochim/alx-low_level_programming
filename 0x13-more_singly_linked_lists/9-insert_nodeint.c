#include "lists.h"

/**
 * insert_nodeint_at_index - Function insert node
 * @head: head nodo
 * @idx: index
 * @n: integer
 *
 * Return: listint
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *headaux;
	listint_t *newnode;
	unsigned int s;

	s = 0;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	headaux = *head;
	while (headaux != NULL && s != idx - 1)
	{
		s++;
		headaux = headaux->next;
	}
	if (s == idx - 1 && headaux != NULL)
	{
		newnode->next = headaux->next;
		headaux->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
