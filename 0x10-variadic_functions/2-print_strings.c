#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function print strings
 * @separator: separators
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *ptr;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
