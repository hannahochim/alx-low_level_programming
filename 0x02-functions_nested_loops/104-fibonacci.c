#include <stdio.h>
#define MAXIMUM 10000000000

/**
 * main - main code block
 * Description: This will print the first 98
 * Fibonacci numbers starting with 1 and 2.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int hld1, hld2, hld3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > MAXIMUM || fr2 > 0 || fr1 > 0)
		{
			hld1 = (bk1 + bk2) / MAXIMUM;
			hld2 = (bk1 + bk2) % MAXIMUM;
			hld3 = fr1 + fr2 + hld1;
			fr1 = fr2, fr2 = hld3;
			bk1 = bk2, bk2 = hld2;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			hld2 = bk1 + bk2;
			bk1 = bk2, bk2 = hld2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
