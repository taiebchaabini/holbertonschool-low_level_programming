#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - function that prints strings, followed by a new line.
* @separator: pointer to char
* @n: number of elements
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *p;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char*);
		if (!p[0])
			printf("(nil)");
		else
			printf("%s", p);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
