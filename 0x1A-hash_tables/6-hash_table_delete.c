#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to delete.
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmpy;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			node = ht->array[k];
			while (node != NULL)
			{
				tmpy = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmpy;
			}
		}
	}
	free(head->array);
	free(head);}
