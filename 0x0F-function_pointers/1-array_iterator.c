#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on array
 * @array: pointer to array
 * @size: number elements
 * @action: pointer to function
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (n = 0; n < size; n++)
			action(array[n]);
	}
}
