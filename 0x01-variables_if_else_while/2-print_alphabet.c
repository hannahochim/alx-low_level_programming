#include <stdio.h>

/**
 * main - This contains all code
 *
 * Description: This code prints all
 * letters in the alphabet.
 *
 * Return: returns 0 on success
 */

int main(void)
{
	char ch = 'a';
	
	for (ch = 'a';  ch <= 'z'; ch++)
	{
		putchar(ch);
	}
putchar('\n');

return (0);
}
