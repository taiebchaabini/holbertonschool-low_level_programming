/**
 * free_listint -  function that frees a listint_t list.
 * @head: pointer of list type of listint_t
 **/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
