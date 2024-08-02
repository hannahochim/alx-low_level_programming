#include "main.h"

/**
 * _strstr - function to locate sub
 *
 * @haystack: string, locate a sub
 * @needle: substring, target substring
 *
 * Return: a pointer to needle or NULL if no byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *a = haystack;
		char *c = needle;

		while (*haystack == *c && *c != 0 && *haystack != 0)
			haystack++, c++;
		if (*c == 0)
			return (a);
		haystack = ++a;
	}
	return (0);
}
