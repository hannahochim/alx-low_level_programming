#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * Return: 0
 */
int main(void)
{
	int i, j;
	int p, q, r, s;

	for (i = 0; i < 100; i++)
	{
		p = i / 10; /*douqler fsum*/
		q = i % 10; /*singles fnum*/

		for (j = 0; j < 100; j++)
		{
			r = j / 10; /*doubles snum*/
			s = j % 10; /*singles snum*/

			if (p < r || (p == r && q < s))
			{
				putchar(p + '0');
				putchar(q + '0');
				putchar(32);
				putchar(r + '0');
				putchar(s + '0');

				if (!(p == 9 && q == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
