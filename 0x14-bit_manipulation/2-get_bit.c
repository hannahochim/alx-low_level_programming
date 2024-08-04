#include "main.h"

/**
 * get_bit - return val of bit
 * @n: the number
 * @index: the position
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitn;

	if (index > 64)
		return (-1);

	bitn = n >> index;

	return (bitn & 0x1);
}
