#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
* _printc - function that print a char
* @list: take the list
**/

void _printc(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
* _printi - function that print an integer
* @list: take the list
**/
void _printi(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
* _printf - function that print a float
* @list: take the list
**/
void _printf(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
* _prints - function that print a string
* @list: take the list
**/
void _prints(va_list list)
{
	char *p;

	p = va_arg(list, char*);
	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}
/**
 * print_all - function that prints anything.
 * @format: format of the passed arguments
 **/
void print_all(const char * const format, ...)
{
	int i = 0, b = 0;
	va_list list;
	void (*fp)(va_list);

	type t[] = {
		{'c', _printc},
		{'i', _printi},
		{'f', _printf},
		{'s', _prints}
	};

	va_start(list, format);
	while (format[i] != '\0')
	{
		b = 0;
		while (b < 4)
		{
			if (t[b].c == format[i])
			{
				fp = t[b].f;
				fp(list);
				if (format[i + 1] != '\0')
					printf(", ");

			}
			b++;
		}
		i++;

	}
	printf("\n");
	va_end(list);
}
