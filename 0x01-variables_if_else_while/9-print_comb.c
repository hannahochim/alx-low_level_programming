#include <stdio.h>

/**
 * main - This contains main block
 *
 * Description: This program is designed to
 * print all possible combination of single
 * digit numbers.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n == '9')
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
