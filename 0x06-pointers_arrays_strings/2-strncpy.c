#include "main.h"
#include "string.h"

/**
 * _strncpy - this copies a number of string.
 * @dest: content is to be copied to this pointer.
 * @src: this is the string to be copied.
 * @n: the amount of characters to copy from source.
 *
 * Return: pointer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
