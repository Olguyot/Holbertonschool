#include "hash_tables.h"

/**
 * shash_table_create - shash_table_create
 * @size: size INPROGRESS
 * Return: hastable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newTable;
	unsigned long int i;

	newTable = malloc(sizeof(shash_table_t));
	if (newTable == NULL)
		return (NULL);
	newTable->size = size;
	newTable->array = malloc(sizeof(shash_table_t *) * size);
	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newTable->array[i] = NULL;
	}
	return (newTable);
}
#include "hash_tables.h"
/**
 * shash_table_set - shash_table_set
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	unsigned long int index;
	unsigned long int i;
	/*Get index*/
	if (key == NULL || key[0] == '\0')
		return (0);
	if (ht == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	/*Add AddNewNodeAtFirst*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - shash_table_get
 * @ht: hash table
 * @key: key
 * Return: chars associated value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
		unsigned long int index;
		shash_node_t *ptrNode;

		if (ht == NULL || key == NULL)
			return (NULL);
		index = key_index((const unsigned char *)key, ht->size);
		ptrNode = ht->array[index];
		while (ptrNode)
		{
			if (strcmp(ptrNode->key, key) == 0)
				return (ptrNode->value);
			ptrNode = ptrNode->snext;
		}
		return (NULL);
}
/**
 * shash_table_print - shash_table_print
 * @ht: hash table
 * Return: hash_table_print
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *ptr;
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
				ptr = ptr->snext;
				bl = 1;
			}
		}
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - shash_table_print_rev
 * @ht: hash table
 * Return: hash_table_print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *ptr;
	int bl = 0;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			if (ht == NULL)
				return;
			while (ptr)
				ptr = ptr->snext;
			while (ptr != ht->array[i])
			{
				if (bl == 1)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->sprev;
				bl = 1;
			}
		}
	}
	printf("}\n");
}
#include "hash_tables.h"

/**
 * shash_table_delete - shash_table_delete.
 * @ht: hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *tmp;
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
