#include <stdio.h>

/**
 * main - This contains the main
 * code block
 *
 * Description: This code prints the
 * alphabet in lowercase and in reverse.
 *
 * Return: returns 0 with success
 */

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
