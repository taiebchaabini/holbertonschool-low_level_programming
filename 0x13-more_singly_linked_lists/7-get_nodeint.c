/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * linked list, and returns the head node’s data (n).
 * @head: pointer of list type of listint_t
 * @index: where index is the index of node, starting at 0
 * Return: head list starting from the @index
 **/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
