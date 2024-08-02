#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the block of memory to fill
 * @b: this is the value to be set.
 * @n: this is the number of bytes to set to the value
 *
 * Return: to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
