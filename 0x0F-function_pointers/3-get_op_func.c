#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - get function
 *
 * @s: pointer to function
 *
 * Return: returns Int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int n = 0;

	while (n < 5)
	{
		if (*(ops[n]).op == *s)
			return (ops[n].f);
		n++;
	}
	return (NULL);
}
