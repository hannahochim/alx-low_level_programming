#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: pointer to get string from
 * Return: void
 */
void rev_string(char *s)
{
	int len, i, half;
	char lex;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;

	half = len / 2;

	while (half--)
	{
		lex = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = lex;
		i++;
	}
}
