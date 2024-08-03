#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using mal
* @b: size of the memory to be allocated
*
* Return: pointer on success, 98 if otherwise
*/

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
