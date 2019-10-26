#include "variadic_functions.h"
#include "my_functions.h"
/**
 * print_all - function that prints anything.
 * @format: format of the passed arguments
 **/
void print_all(const char * const format, ...)
{
	int i = 0, b = 0;
	void (*fp)(va_list);
	va_list list;

	type t[] = {
		{"c", _printc},
		{"i", _printi},
		{"f", _printf},
		{"s", _prints},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format[i])
	{
		b = 0;
		while (t[b].c != NULL)
		{
			if (t[b].c[0] == format[i])
			{
				fp = t[b].f;
				fp(list);
				if (format[i + 1])
					printf(", ");

			}
			b++;
		}
		i++;

	}
	printf("\n");
	va_end(list);
}
