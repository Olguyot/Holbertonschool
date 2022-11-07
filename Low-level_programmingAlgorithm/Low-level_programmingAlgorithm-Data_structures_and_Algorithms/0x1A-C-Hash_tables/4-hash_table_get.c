#include "hash_tables.h"
/**
 * hash_table_get - hash_table_get
 * @ht: hash table
 * @key: key
 * Return: chars associated value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
		unsigned long int index;
		hash_node_t *ptrNode;

		if (ht == NULL || key == NULL)
			return (NULL);
		index = key_index((const unsigned char *)key, ht->size);
		ptrNode = ht->array[index];
		while (ptrNode)
		{
			if (strcmp(ptrNode->key, key) == 0)
				return (ptrNode->value);
			ptrNode = ptrNode->next;
		}
		return (NULL);
}
