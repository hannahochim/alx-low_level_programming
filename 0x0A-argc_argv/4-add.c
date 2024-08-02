#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * checker - check icf number
 * @a: char to be checked
 * Return: returns 1 on success and 0 if otherwise
 **/
int checker(char *a)
{
	int i, n, len;

	i = 0;
	n = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			n = n * 10 + (a[i] - '0');
		i++;
	}
	return (n);
}
/**
 * main - add positive numbers
 * @argc: arguement count
 * @argv: array of pointers to arg str
 * Return: result or 1
 **/
int main(int argc, char *argv[])
{
	int i, n, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		n = checker(argv[i]);
		if (n == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
