#include "main.h"

/**
 * _islower - This is designed to check
 * any characte entered is lowercase
 * @c: c is an ascii character
 *
 * Return: returns 1 if true and
 * 0 when otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
