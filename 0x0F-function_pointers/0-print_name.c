/**
* print_name - function that prints a name.
* @name: a name passed argument
* @f: pointer to function
**/
void print_name(char *name, void (*f)(char *a))
{
	f(name);
}
