#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table
* @ht: hash table
**/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array = NULL;
	hash_node_t *tmp = NULL;
	unsigned int i = 0;

	if (!ht)
		return;
	array = ht->array;
	while (i < ht->size)
	{
		if (array[i])
		{
			while (array[i])
			{
				tmp = array[i]->next;
				free(array[i]->key);
				free(array[i]->value);
				free(array[i]);
				array[i] = tmp;
			}
		}
		i++;
	}
	free(array);
	free(ht->array);
	free(ht);
}
