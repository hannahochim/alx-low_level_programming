#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print the min number of coins
* @argc: number of arg
* @argv: vector
*
* Return: returns 0 on success
*/

int main(int argc, char **argv)
{
	int i;
	int count = 0;

	if (argc != 2)/* A */
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		while (i >= 25)
		{
			i -= 25;
			count++;
		}
		while (i >= 10)
		{
			i -= 10;
			count++;
		}
		while (i >= 5)
		{
			i -= 5;
			count++;
		}
		while (i >= 2)
		{
			i -= 2;
			count++;
		}
		while (i >= 1)
		{
			i -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
