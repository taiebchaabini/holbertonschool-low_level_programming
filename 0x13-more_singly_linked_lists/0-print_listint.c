/**
* print_listint - function that prints all the elements of a listint_t list.
* h - take a list type of listint_t 
* Return: number of elements of @h list
**/
#include "lists.h"
#include <stdio.h>
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
