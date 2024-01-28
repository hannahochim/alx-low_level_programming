#include <stdio.h>

/**
 * main - This contains the main
 * block of code.
 *
 * Description: This prints all the numbers
 * in base 16 in lowercase.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	int n = '0';
	char ch = 'a';

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
