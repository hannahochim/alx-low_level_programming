#include "main.h"
#include <string.h>

/**
 * _strspn - get the length of prefix substring
 *
 * @accept: pointer to get the bytes
 * @s: string to be scanned
 *
 * Return: number of bytes in s which are from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}

	return (i);
}
