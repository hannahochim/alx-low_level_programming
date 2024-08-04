#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a pointer to the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int runr;
	list_t *new_end_node;
	list_t *firstnode;

	new_end_node = malloc(sizeof(list_t));
	runr = 0;
	if (new_end_node)
	{
		new_end_node->str = strdup(str);
		if (!new_end_node->str || !str)
		{
			free(new_end_node);
			return (NULL);
		}
		while (new_end_node->str[runr])
			runr++;
		new_end_node->next = NULL;
		new_end_node->len = runr;
		if (!*head)
		{
			*head = new_end_node;
			return (new_end_node);
		}
		firstnode = *head;
		while (firstnode->next)
			firstnode = firstnode->next;
		firstnode->next = new_end_node;
		return (new_end_node);
	}
	return (NULL);
}
