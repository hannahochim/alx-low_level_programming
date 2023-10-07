#include <stdio.h>
/**
 * main - This prints lowercase alphabets
 * Description: putchar function utilized for
 * printing lowercase alphabet followed by a new line
 * Return: returns 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
