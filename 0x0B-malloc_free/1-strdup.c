#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to newly allocated memory
* @str: a string given by main
*
* Return: the pointer, null if string is null
*/

char *_strdup(char *str)
{
	char *p;
	int n = 0;

	if (str == NULL)
		return (NULL);
	while (str[n])
		n++;
	p = malloc(sizeof(char) * n + 1);
	if (p == NULL)
		return (NULL);
	n = 0;
	while (str[n])
	{
		p[n] = str[n];
		n++;
	}
	p[n] = str[n];
	return (p);
}
