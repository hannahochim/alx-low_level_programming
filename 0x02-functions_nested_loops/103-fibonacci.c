#include <stdio.h>

/**
 * main - This is designed to print
 * the sum of even valued Fibonacci
 * numbers below 4,000,000
 *
 * Return: returns void on success
 */

int main(void)
{
	unsigned int a, b, c, d, e;

	a = 1;
	b = 2;
	c = 3;
	d = 2;
	for (e = 2; e <= 32; e++)
	{
		if (c % 2 == 0)
			d = d + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%u\n", d);
	return (0);
}
