#include "main.h"

/**
 * _strlen_recursion - return length
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * __pal - pal
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int __pal(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (__pal(s + 1, l - 2));
	}
	return (0);
}

/**
 * _is_pal - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int _is_pal(char *s)
{
	int len = _strlen_recursion(s);

	return (__pa1(s, len - 1));
}
