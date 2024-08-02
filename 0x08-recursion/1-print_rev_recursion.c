#include "main.h"

/**
 * _print_rev_recursion - This function prints
 * a string in reverse
 *
 * @s: char to revese string from
 *
 * Return: 0 on success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
