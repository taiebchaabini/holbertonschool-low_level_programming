#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* print_list : function that prints all the elements of a list_t list.
* list_t h - r
* Return: size of current function
**/
size_t print_list(const list_t *h)
{
	list_t* h;
	unsigned int count = 0;

	tmp = h;
	while (tmp->next != NULL)
	{
		tmp = tmp->link;
		printf("[%u] %s", h->len, h->str);
		count++;
	}
	return (count);
}
