#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: pointer to char
 * @f: a pointer to function that receives a pointer to char
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
