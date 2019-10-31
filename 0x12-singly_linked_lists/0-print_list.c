#include "lists.h"
/**
* print_list : function that prints all the elements of a list_t list.
* list_t h - r
* Return: size of current function
**/
size_t print_list(const list_t *h)
{

	const list_t* tmp;
	unsigned int count = 0;

	tmp = NULL;
	tmp = h;
	while (tmp->next != NULL)
	{
		printf("[%u] %s", tmp->len, tmp->str);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
