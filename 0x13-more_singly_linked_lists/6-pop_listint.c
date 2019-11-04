/**
 * pop_listint -  function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer of list type of listint_t
 * Return: the data(n) of head node's
 **/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *h;

	if (!*head)
		return (0);
	h = *head;
	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
