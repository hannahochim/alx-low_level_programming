#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - function for string length
 * @s: str
 * Return: length of the str
 */
int _strlen(const char *s)
{
	int f;

	for (f = 0; s[f]; f++)
		;
	return (f);
}

/**
 * add_node - function adds new nodes
 * @head: place in the list
 * @str: str to add to the head
 * Return: pointer to current position
 */
list_t *add_node(list_t **head, const char *str)
{
	int f, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (f = 0; str[f]; f++)
		content[f] = str[f];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
