#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees up a 2d grid created in prev project
* @grid: a pointer to a pointer. a 2d array grid
* @height: height
*
* Description: this part should return the all clear from valgrind
* Return: none it is void:
*/

void free_grid(int **grid, int height)
{
	int n = 0;

	if (grid == NULL || height <= 0)
		return;
	while (n < height)
	{
		free(grid[n]);
		n++;
	}
	free(grid);
}
