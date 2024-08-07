#include "lists.h"

/**
 * dlistint_len - function showsthe number
 * of elements in a DLL
 * @h: a pointer to the head of the DLL
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_el;

	num_of_el = 0;
	while (h)
	{
		h = h->next;
		num_of_el = num_of_el + 1;
	}
	return (num_of_el);
}
