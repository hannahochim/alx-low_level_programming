#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function to print len
 * @h: pointer
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
		h = h->next, n++;
	return (n);
}
