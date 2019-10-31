#include "lists.h"
/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: pointer of head of list_t
* @str: string passed
* Return: number of elements into the node list
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	list_t *new;

	h = *head;
	new = malloc(sizeof(list_t));
	if (!new || !str)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (h);
}
