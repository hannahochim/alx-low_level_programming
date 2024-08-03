#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concats two strings
 * @s1: string one
 * @s2: string two
 * @n: limit of string two
 * Return: pointer to the new space in memory, null on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + n + 1));

	if (p == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		p[i] = s2[j];
		i++, j++;
	}
	p[i] = '\0';
	return (p);
}
