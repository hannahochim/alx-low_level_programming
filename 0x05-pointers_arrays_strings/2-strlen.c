#include "main.h"

/**
 * _strlen - this returns the lenght of a string
 * @s: pointer to the string
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
