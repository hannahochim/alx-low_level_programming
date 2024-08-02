#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character
 * in a string
 * @s: string to be scanned
 * @c: character to look for
 * Description: returns the first occurance of the char c in string
 * Return: int from s
*/

char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != 0)
	{
		if (s[n] == c)
			return (s + n);
		n++;
	}
	if (c == 0)
		return (s + n);
	return (0);
}
