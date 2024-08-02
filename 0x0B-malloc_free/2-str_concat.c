#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function concatenates two strings
 * @s1: prime string
 * @s2: string to concate
 * Return: the pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	int size2;
	int i, n;
	char *array;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (size = 0; s1[size] != '\0'; size++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	array = malloc(((size) + (size2 + 1)) * sizeof(char));

	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = s1[i];
	}
	for (n = 0; n < (size2 + 1); n++)
	{
		array[i + n] = s2[n];
	}
	return (array);
}
