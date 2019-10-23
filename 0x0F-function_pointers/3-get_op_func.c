#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - function that selects the correct function to perform the
* operation asked by the user. You’re not allowed to declare
* any other function.
* @s: passed argument to the program
* Return: function depends on the operator
**/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
