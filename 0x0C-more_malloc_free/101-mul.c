#include "main.h"

/**
 * main - func multiply two positive numbers
 * @argc: n arg
 * @argv: argument
 * Return: int on success
 */

int main(int argc, char *argv[])
{
unsigned long mul;
int m, n;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (argv[m][n] > 57 || argv[m][n] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
