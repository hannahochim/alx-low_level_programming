#include "main.h"

/**
 * main - func multiply two positive numbers
 * @argc: n arg
 * @argv: argument
 * Return: int on success
 */

int main(int argc, char *argv[])
{
unsigned long m;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	m = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", m);
return (0);
}
