#include <stdio.h>

/**
* main - prints its name
* @argc: number of arguments
* @argv: vector
*
* Description: prints current directory and the name
* Return: returns the name.
*/

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
