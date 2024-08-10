#include "lists.h"

/**
 * add_dnodeint_end - adds new node
 * @head: head node
 * @n: node value
 * Return: address of node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *enode;
	dlistint_t *tem;

	enode = malloc(sizeof(dlistint_t));
	if (enode == NULL)
	{
		return (NULL);
	}
	enode->n = n;
	enode->prev = NULL;
	enode->next = NULL;

	if (*head == NULL)
	{
		*head = enode;
		enode->prev = NULL;
		return (enode);
	}
	tem = *head;
	while (tem->next != NULL)
		tem = tem->next;
	tem->next = enode;
	enode->prev = tem;
	return (enode);
}
