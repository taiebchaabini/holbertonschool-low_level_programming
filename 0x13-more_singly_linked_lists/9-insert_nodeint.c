/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to pointer of list type of listint_t
 * @idx: position of where the new node should start
 * @n: argument (*head)->n of the new node
 * Return: NULL if it fail, otherwise return the new listint_t
 **/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *h = NULL, *tmp = NULL;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	h = *head;
	if (!(*head) && idx != 0)
	{
		free(new);
		return (NULL);
	}
	if (!(*head) && idx == 0)
		(*head) = new;
	while (h)
	{
		if (count == idx && idx == 0)
		{
			tmp = h;
			new->next = tmp;
			(*head) = new;
		}
		if (count == idx - 1)
		{
			tmp = h->next;
			new->next = tmp;
			h->next = new;
			if (!(h->next))
			{
				free(new);
				return (NULL);
			}
		}
		h = h->next;
		count++;
	}
	return (new);
}
