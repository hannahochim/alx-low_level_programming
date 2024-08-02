#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: memory to copy to
 * @src: memory to copy from
 * @n: amount of bytes to copy
 *
 * Return: 0 is success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	for (; y < n; y++)
		dest[y] = '\0';
	return (dest);
}
