#include <stdio.h>

/**
 * main - Code prints all the numbers of base 16
 * Description: This program is designed to print
 * all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: returns 0 on success
 */

int main(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		putchar(y + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
