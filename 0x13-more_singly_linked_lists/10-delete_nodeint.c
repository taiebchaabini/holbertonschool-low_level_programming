/**
 * delete_nodeint_at_index - function that deletes the node at index index 
 * of a listint_t linked list.
 * @head: pointer to pointer of list type of listint_t
 * @index: position of where the node should be deleted
 * Return 1 if succeeded, -1 if it failed. 
 **/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *h;
	unsigned int count = 0;

	h = *head;
	while (h)
	{
		if (count == index - 1)
		{
		// trash	tmp = h->next;
		// trash	h->next = h;
		// trash	h = tmp->next;
		}
		h = h->next;
		count++;
	}
	return (1);
}
