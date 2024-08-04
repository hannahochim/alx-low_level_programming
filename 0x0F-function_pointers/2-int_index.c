#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function searche an integer
 * @array: pointer array
 * @size: number elements in array
 * @cmp: pointer to the function to be used to compar values
 * Return: first element index, on success or return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (d = 0; d < size; d++)
	{
		if (cmp(array[d]) != 0)
			return (d);
	}
	return (-1);
}
