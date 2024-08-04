#include "function_pointers.h"

/**
 *main - Function prints the opcodes of main function.
 *@argc: int value
 *@argv: char value
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (n = 0; n < atoi(argv[1]) - 1; n++)
		printf("%02hhx ", ((char *)main)[n]);
	printf("%02hhx\n", ((char *)main)[n]);
	return (0);
}
