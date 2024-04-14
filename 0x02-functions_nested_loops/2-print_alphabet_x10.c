#include "main.h"

/**
 * print_alphabet - Contains block of code
 *
 * Description: This is designed to
 * print the alphabets in lower case
 *
 * Return: returns 0 on success
 */

void print_alphabet_x10(void)
{
	char ch;
	int n = 0;

	while (n < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
		_putchar('\n');
		n++;
	}
}
