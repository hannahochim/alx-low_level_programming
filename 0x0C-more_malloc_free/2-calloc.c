#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function allocates mem for an array
 *
 * @nmemb: number of elements
 * @size: size in bytes for each
 *
 * Return: a pointer on success, null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (n = 0; n < nmemb * size; n++)
		pointer[n] = 0;
	return (pointer);
}
