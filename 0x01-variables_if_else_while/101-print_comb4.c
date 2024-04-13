#include <stdio.h>

/**
 * main - This contains main block
 *
 * Description: This program is designed to
 * print all possible combination of three
 * digit numbers.
 *
 * Return: returns 0 on success.
 */

int main(void)

{
	int r, s, t, u;

	r = 0;
	while (r < 800)
	{
		s = r / 100;
		t = (r / 10) % 10;
		u = r % 10;

		if (s < t && t < u)
		{
			putchar(s + '0');
			putchar(t + '0');
			putchar(u + '0');

			if (r < 789)
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
