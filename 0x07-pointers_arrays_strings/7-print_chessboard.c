#include "main.h"

/**
 * print_chessboard - function prints the chessboard
 * @a: 2d array of chars
 *
 * Return: a character
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}

	_putchar('\n');
	}
}
