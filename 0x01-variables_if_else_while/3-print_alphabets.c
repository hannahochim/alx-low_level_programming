#include <stdio.h>
/**
 * main - Code to print alphabets
 * in lower and upper case
 *
 * Description: Prints alphabet in lower casem then
 * in upper case, followed by a new line
 * Return: return 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
