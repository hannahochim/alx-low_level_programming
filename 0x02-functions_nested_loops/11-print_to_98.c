#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print numbers from
 * n to 98
 * @n: integer
 *
 * Return: returns value of n
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
