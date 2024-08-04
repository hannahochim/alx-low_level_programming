#include "main.h"
/**
 * binary_to_uint - function to convert.
 * @b: binary number in string format
 * Description: convert binary to decimal
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, base;
	int n;

	result = 0;
	n = 0;
	base = 1;

	if (!b)
		return (0);

	while (*(b + n))
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		n++;
	}
	for (n--; n >= 0; n--)
	{
		if (*(b + n) == '1')
			result = result + base;
		base = base * 2;
	}

	return (result);
}
