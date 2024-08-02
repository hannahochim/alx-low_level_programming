#include "main.h"

/**
 * is_prime - shows number is prime
 *
 * @m: int
 * @n: int
 *
 * Return: 0 if is not a prime
 */
int is_prime(int m, int n)
{
	if (m < 2)
		return (0);
	if (m == 2)
		return (1);
	if (n >= m / 2)
		return (1);
	if (m % n == 0)
		return (0);
	else
		return (is_prime(n, n + 1));
	return (1);
}

/**
 * is_prime_number - function to check prime number
 *
 * @n: number to evaluate
 *
 * Return: 1 on success and 0 if otherwise
 */
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
