#include "hash_tables.h"
/**
 * hash_table_print - hash_table_print
 * @ht: hash table
 * Return: hash_table_print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *ptr;
	int bl = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				if (bl == 1)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				bl = 1;
			}
		}
	}
	printf("}\n");
}
