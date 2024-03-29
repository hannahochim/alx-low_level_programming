#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char
 * @src: char
 * Description: copy the string pointedd to by pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
