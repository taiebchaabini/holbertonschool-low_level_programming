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
	listint_t *new = NULL, *h = *head, *tmp = NULL;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head) && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		new->next = h;
		(*head) = new;
		return (new);
	}
	while (count < idx - 1)
	{
		if (count == idx - 1)
		{
			if (!(h))
			{
				free(new);
				return (NULL);
			}
			else
			{
				tmp = h->next;
				new->next = tmp;
				h->next = new;
			}
		}
		else
		h = h->next;
		count++;
	}
	return (new);
}
