#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to be looked at
 * @key: the key
 * Return: The value associated with the element, or NULL with no key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	n_node = ht->array[idx];
	while (n_node && strcmp(n_node->key, key) != 0)
		n_node = n_node->next;

	return ((n_node == NULL) ? NULL : n_node->value);
}
