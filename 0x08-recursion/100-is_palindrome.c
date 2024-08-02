#include "main.h"

/**
 * _is_pal - returns length.
 * @s: int type
 * Return: character
 **/
int _is_pal(char *s)
{
int first, last;

first = 0;
last = _strlen_recursion(s) - 1;
return (__pal(s, first, last));
}

/**
 * __pal - entry
 * Desc: palindrome
 * @s: character
 * @first: integer
 * @last: integer
 * Return: Recursion
 **/
int __pal(char *s, int first, int last)
{
if (first > last)
{
return (1);
}
else if (s[first] == s[last])
{
return (__pal(s, first + 1, last - 1));
}
else
return (0);
}

/**
 * _strlen_recursion - Function returns length
 * os a string
 * Desc: _strlen_recursion
 * @s: character
 * Return: String length
 **/
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
