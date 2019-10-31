#include "lists.h"
/**
* print_list : function that prints all the elements of a list_t list.
* list_t h - r
* Return: size of current function
**/
size_t print_list(const list_t *h)
{

	list_t* tmp;
	unsigned int count = 0;

	tmp = NULL;
	tmp = malloc(sizeof(list_t));
	tmp = h;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		printf("[%u] %s", tmp->len, tmp->str);
		count++;
	}
	return (count);
}
