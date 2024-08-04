#include "main.h"

/**
 * flip_bits - count the bit to change
 * @n: the number
 * @m: the number to compare
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;

	j = 0;
	n = n ^ m;
	while (n)
	{
		j += n & 1;
		n >>= 1;
	}
	return (j);
}
