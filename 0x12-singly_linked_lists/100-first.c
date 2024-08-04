#include <stdio.h>
/**
 * _myfunc - prints before main
 *
 * Return: void
 */
void _myfunc(void) __attribute__ ((constructor));
void _myfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
