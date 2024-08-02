#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: char to be initialized
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	n = 0;
	while (n < size)
	{
		s[n] = c;
		n++;
	}
	return (s);
}
