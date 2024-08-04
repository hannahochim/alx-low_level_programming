#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Function sum all arguments
 * @n: number of arg
 * Return: 0 
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	int sum;
	unsigned int j;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numb, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(numb, int);
	}
	va_end(numb);
	return (sum);
}
