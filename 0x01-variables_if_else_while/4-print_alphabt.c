#include <stdio.h>
/**
 * main - Code to Print the alphabet in lowercase
 * followed by a new line
 * Description: This program prints all alphabets
 * in lowercase exceptq and c
 * Return: returns 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
