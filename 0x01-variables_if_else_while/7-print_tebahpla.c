#include <stdio.h>
#include <string.h>

/**
 * main - Code designed to print lower case
 * alphabet
 * Description: This program prints lower case
 * alphabets in reverse, followed by a new line
 * Return: returns 0 on success
 */

int main(void)
{
	char ch = 'z';

		for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
