#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - contains main code, all actually.
 *
 * Description: This code is designed to generate
 * a random number, then print if it is positive,
 * negative or zero.
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
