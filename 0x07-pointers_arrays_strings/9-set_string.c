#include "holberton.h"

/**
* set_string - function that sets the value of a pointer to a char.
* @s: src string from pointer
* @to: getting string from @s
**/
void set_string(char **s, char *to)
{
	*s = to;
}
