#include "lists.h"

/**
 * list_len - returns the numbers of elements
 * @h: constant pointer type list_t
 *
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t nL;

	nL = 0;

	while (h != NULL)
	{
		nL++;
		h = h->next;
	}
	return (nL);
}
