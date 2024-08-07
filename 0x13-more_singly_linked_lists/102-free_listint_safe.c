#include "lists.h"

/**
 * free_listint_safe - mas listas enlazadas
 * @h: Doble puntero asignado
 * Return: i
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n = 0;

	temp = *h;
	if (h == NULL)
		return (n);
	while (temp)
	{
		if (temp <= temp->next)
		{
			free(temp);
			n++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
		n++;
	}
	*h = NULL;
	return (n);
}
