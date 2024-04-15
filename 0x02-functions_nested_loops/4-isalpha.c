#include "main.h"

/**
 * _isalpha - code block
 *
 * Description: This checks for
 * alphabetic characters.
 *
 * @c: Character to be checked
 *
 * Return: returns 1 on success and
 * 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
