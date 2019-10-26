#ifndef variadich
#define variadich
#include <stdarg.h>
#include <stdio.h>
/**
* struct ts - structure for checking type of arguments
* @c: Checking the char for type checking
* @f: Pointer to function that hold the function related to the char type
**/
typedef struct ts
{
	char *c;
	void (*f)(va_list);
} type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printc(va_list list);
void _printi(va_list list);
void _printf(va_list list);
void _prints(va_list list);
#endif
