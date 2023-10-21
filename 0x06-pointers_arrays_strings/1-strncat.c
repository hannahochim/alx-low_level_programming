#include "main.h"
#include "string.h"

/**
 * _strncat - concatenate and use most n bytes from src
 * @dest:destination to append to
 * @src: string to append
 * @n: integer value to use.
 *
 * Return: pointer of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
