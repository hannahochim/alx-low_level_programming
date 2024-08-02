#include "main.h"
/**
 * _sq_rt - square root of a number
 *
 * @n: the given number
 * @corre: from 0 up looking for square always less than the half of the number
 * Return: if does not have square or corre if it find it
 */
int _sq_rt(int corre, int n)
{
	if (corre < 0)
		return (-1);
	if (corre == 1)
		return (1);
	if (n > corre / 2)
		return (-1);
	if (corre != n * n)
		return (_sq_rt(corre, n + 1));
	if (corre == n * n)
		return (n);
	return (-1);
}
/**
 * _sqrt_recursion - return the square root of a natural number
 *
 * @n: number
 *
 * Return: the square root or -1 if it does not have
 */

int _sqrt_recursion(int n)
{
	return (_sq_rt(n, 0));
}
