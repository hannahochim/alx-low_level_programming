#include <stdio.h>

/**
 * main - Contains main code block.
 *
 * Description: This prints the numbers
 * fro 0 - 9.
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");

	return (0);
}
