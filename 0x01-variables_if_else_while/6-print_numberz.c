#include <stdio.h>

/**
 * main - Contains main block.
 *
 * Description: This prints single
 * digit numbers
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
