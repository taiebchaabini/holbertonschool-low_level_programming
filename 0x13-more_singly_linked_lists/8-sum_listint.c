/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer of list type of listint_t
 * Return: 0 if list is empty otherwise return the sum of all the data (n).
 **/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
