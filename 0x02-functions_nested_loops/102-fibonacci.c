#include <stdio.h>

/**
 * main - Program designed to
 * print the firt 50 Fibonacci
 * numbers
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int count = 2;
	long int a = 1, b = 2;
	long int c;

	printf("%lu, ", a);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}
		c = b;
		b += a;
		a = c;
		count++;
	}

	return (0);

}
