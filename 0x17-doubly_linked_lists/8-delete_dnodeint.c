#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index index of
 * a dlistint_t linked list.
 * @head: dlistint_t header pointer to pointer
 * @index: Position where the new node will be removed
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, len = 0;
	dlistint_t *tmp = NULL, *old = NULL;

	if (!head || !*head)
		return (-1);
	tmp = *head;
	for (len = 0; tmp; len++, tmp = tmp->next)
		;
	if (index > len)
		return (-1);
	tmp = *head;
	if ((*head)->next == NULL && index == 0)
	{
		*head = NULL;
		free(tmp);
		return (1);
	}
	if (index == 0)
	{
		old = tmp;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp->next)
	{
		if (i == index - 1 && index + 1 == len)
		{
			old = tmp->next;
			tmp->next = NULL;
			free(old);
			return (1);
		}
		if (i == index - 1)
		{
			old = tmp->next;
			tmp->next->next->prev = tmp;
			tmp->next = tmp->next->next;
			free(old);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
