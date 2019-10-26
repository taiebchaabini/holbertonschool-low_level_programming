#ifndef myfunctions
#define myfunctions
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
#endif
