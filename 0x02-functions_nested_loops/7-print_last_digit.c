#include "main.h"

/**
 * print_last_digit - Print the last
 * digit of any inputed number.
 *
 * @n: inputed number
 *
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
		m = -m;
	_putchar('0' + m);
	return (m);
}
