#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to be updated
 * @key: the key
 * value: value associated with the key
 * Return: 1 on succes, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_node, *new;
	char *new_val;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return 0;

	new_val = strdup(value);
	if (new_val == NULL)
		return 0;

	idx = key_index((const unsigned char *)key, ht->size);
	new = ht->array[idx];

	while (new)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = new_val;
			free(new_val);
			return 1;
		}
		new = new->next;
	}

	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
	{
		free(new_val);
		return 0;
	}

	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(n_node);
		free(new_val);
		return 0;
	}

	n_node->value = new_val;
	n_node->next = ht->array[idx];
	ht->array[idx] = n_node;

	return 1;	
}
