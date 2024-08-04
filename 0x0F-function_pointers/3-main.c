#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Principal function
 *
 * @arc: count arg
 * @arg: array arg
 *
 * Return: Always 0
 */
int main(int arc, char *arg[])
{
	int n1, n2, (*operate)(int, int);

	if (arc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*arg[2] != '+' &&
		*arg[2] != '-' &&
		*arg[2] != '/' &&
		*arg[2] != '*' &&
		*arg[2] != '%')
		|| arg[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(arg[1]);
	n2 = atoi(arg[3]);
	if ((*arg[2] == '/' || *arg[2] == '%') && (n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	operate = get_op_func(arg[2]);
	printf("%d\n", operate(n1, n2));
	return (0);
}
