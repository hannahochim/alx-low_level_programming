#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenate all arg
 * @ac: arg count
 * @av: pointer to arg
 * Return: pointer to new space in memory or null
 */
char *argstostr(int ac, char **av)
{
	char *sD;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	sD = malloc(sizeof(char) * size);
	if (sD == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			sD[k++] = av[i][j];
		}
		sD[k++] = '\n';
	}
	sD[k] = '\0';
	return (sD);
}
