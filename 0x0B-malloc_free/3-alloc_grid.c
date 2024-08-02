#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid
 * @width: num of column
 * @height: num of rows
 * Return: pointer to grid or null
 */
int **alloc_grid(int width, int height)
{
	int **grd, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grd = malloc(sizeof(int *) * height);
	if (grd == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grd[i] = malloc(sizeof(int) * width);
		if (grd[i] == NULL)
		{
			while (--i >= 0)
				free(grd[i]);
			free(grd);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grd[i][j] = 0;
	}
	return (grd);
}
