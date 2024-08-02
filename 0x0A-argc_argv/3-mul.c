#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - function multiplies two numbers
* @argc: number of arg
* @argv: vector
*
* Description: multiply two numbers using argc and argv
* Return: returns 0on success
*/

int main(int argc, char **argv)
{
	int n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", n);
	return (0);
}
