#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This assigns a random number to n when executed
 * Description: This will print the last digit of the number
 * stored in the variable n everytime it is executed
 * Return: returns 0 on success
 */
int main(void)
{
	int n, m;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
if (m > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
if (m == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, m);
}
if (m < 6 && m != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}

	return (0);
}
