#include <stdio.h>

/**
 * main - This contains the main code
 *
 * Description: This is designed to
 * print all alphabets except 'q' and 'e'
 *
 * Return: returns 0 on success
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');

	return (0);
}
