#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: dlistint_t header pointer to pointer
 * @idx: Position where the new node will be inserted
 * @n: new value to insert in the new node
 * Return: adress of the new element or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, len = 0;
	dlistint_t *new = NULL, *tmp = NULL;

	if (*h == NULL)
		return (NULL);
	tmp = *h;
	for (len = 0; tmp; len++, tmp = tmp->next)
		;
	if (idx > len + 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp = *h;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = tmp;
		*h = new;
		return (new);
	}
	while (tmp)
	{
		if (i == idx - 1)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
		}
		i++;
		tmp = tmp->next;
	}
	return (new);
}