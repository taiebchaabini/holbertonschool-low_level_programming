#ifndef myfunctions
#define myfunctions
/**
* _printc - function that print a char
* @list: take the list
**/
void _printc(va_list typec)
{
	printf("%c", va_arg(typec, int));
}
/**
* _printi - function that print an integer
* @list: take the list
**/
void _printi(va_list typei)
{
	printf("%d", va_arg(typei, int));
}
/**
* _printf - function that print a float
* @list: take the list
**/
void _printf(va_list typef)
{
	printf("%f", va_arg(typef, double));
}
/**
* _prints - function that print a string
* @list: take the list
**/
void _prints(va_list types)
{
	char *p;

	p = va_arg(types, char*);
	if (p != NULL)
	{
		printf("%s", p);
		return;
	}
		printf("(nil)");
}
#endif
