#include <stdio.h>

/**
 * main - This contains main block
 *
 * Description: This program is designed to
 * print all possible combination of two
 * digit numbers.
 *
 * Return: returns 0 on success.
 */

int main(void)

{
	int r, s, t;

	r = 0;
	while (r < 100)
	{
		t = r / 10;
		s = r % 10;

		if (t < s)
		{
			putchar(t + '0');
			putchar(s + '0');

			if (r < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		r++;
	}
	putchar('\n');

	return (0);
}
