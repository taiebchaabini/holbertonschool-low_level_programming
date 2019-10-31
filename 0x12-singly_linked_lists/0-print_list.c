#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t list.
* @h: take a list of struct node
* Return: number of elements into the node list
**/
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	char *str;
	unsigned int count = 0;

	tmp = NULL;
	tmp = h;
	while (tmp)
	{
		str = tmp->str;
		if (str == NULL)
			str = "(nil)";
		printf("[%u] %s\n", tmp->len, str);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
