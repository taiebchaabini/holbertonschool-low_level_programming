/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list.
 * @head: pointer of list type of listint_t
 * @n: value of the new element to insert
 * Return: address of the new element, or NULL if it failed
 **/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
