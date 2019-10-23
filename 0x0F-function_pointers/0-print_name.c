#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - function that prints a name.
* @name: a name passed argument
* @f: pointer to function
**/
void print_name(char *name, void (*f)(char *a))
{
	if (name != NULL && f != NULL)
	f(name);
}
