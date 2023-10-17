#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int add;
	char q;

	srand(time(NULL));

	while (add <= 2645)
	{
		q = rand() % 128;
		add += q;
		putchar(q);
	}
	putchar(2772 - add);
	return (0);
}
