#include <stdio.h>
#include "main.h"

/**
 * main - This program is built
 * to sum up all the multiples of
 * 3 and 5 below 1024.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	int total = 0;
	int n = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			total = total + n;
		n++;
	}
	printf("%d\n", total);
	return (0);
}
