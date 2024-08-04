#include "lists.h"

/**
 * pop_listint - function delete the head node
 * @head: double pointer to the head of the list
 *
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int j = 0;
	listint_t *ptraux;

	if (*head == NULL)
		return (0);
	j = (*head)->j;
	ptraux = (*head)->next;
	free(*head);
	*head = ptraux;
	return (j);
}
