/**
* listint_len - function that returns the number of elements
* in a linked listint_t list.
* @h: take a list type of listint_t
* Return: number of elements of @h list
**/
#include "lists.h"
#include <stdio.h>
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
