/**
* add_nodeint - function that adds a new node at the 
* beginning of a listint_t list. 
* @h: take a list type of listint_t
* Return: number of elements of @h list
**/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	*head = new;
	(*head)->next = tmp;
	return (new);
}
