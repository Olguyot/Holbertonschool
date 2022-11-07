#include "hash_tables.h"

/**
 * hash_table_delete - hash_table_delete.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				tmp = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
