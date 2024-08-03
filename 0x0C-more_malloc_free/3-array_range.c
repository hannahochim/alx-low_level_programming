#include <stdlib.h>
#include "main.h"

/**
 * array_range - funtion to create an array of ints
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer on success, NULL on failure
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(ptr + i) = min;
	return (ptr);
}
