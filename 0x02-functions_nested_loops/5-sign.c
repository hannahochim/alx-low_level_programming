#include "main.h"

/**
 * print_sign - main block
 * @n: number being tested
 *
 * Description: Print the sign
 * of a number
 *
 * Return: returns 1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
