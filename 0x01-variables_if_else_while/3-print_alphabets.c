#include <stdio.h>

/**
 * main - Contains main code.
 *
 * Description: This code prints the
 * alphabet in lower and uppercase
 * followed by a new line.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');

	return (0);
}
