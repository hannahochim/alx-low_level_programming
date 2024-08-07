#include "main.h"
/**
 * factorial -  function returns the factorial
 * of a given number
 *
 * @n: given int
 *
 * Return: factorial number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
