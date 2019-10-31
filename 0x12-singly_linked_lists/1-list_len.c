#include "lists.h"
/**
* list_len -  function that returns the number of elements in a linked list_t list.
* @h: take a list of struct node
* Return: number of elements into the node list
**/
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned long count = 0;

	tmp = NULL;
	tmp = h;

	if (tmp == NULL)
		return (count);
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
