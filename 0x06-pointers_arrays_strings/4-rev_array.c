#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: an array of integers
 * @n: size of elements of array.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int y = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = y;
	}
}
