#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table.
* @ht: the hash table to add or update the key/value to
* @key: is the key so the key can not be an empty string
* @value: is the value associated with the key.
* value must be duplicated. value can be an empty string
* Return: 1 is succeed otherwise 0
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **head = ht->array;
	hash_node_t *new = NULL;

	if (strlen(key) == 0)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (1);
	}

	new->next = *head;
	*head = new;

	return (1);
}
