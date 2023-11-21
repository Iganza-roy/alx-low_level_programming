#include "lists.h"

/**
 * insert_nodeint_at_index - addds a new node to a linked list
 * @head: pointer to the frst node
 * @idx: index of list where new node should be addded
 * @n: value parameter
 * Return: address of the new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *k, *n_node = *head;
	unsigned int nd;

	k = malloc(sizeof(listint_t));

	if (k == NULL)
		return (NULL);
	k->n = n;
	if (idx == 0)
	{
		k->next = n_node;
		*head = k;
		return (k);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (n_node == NULL || n_node->next == NULL)
			return (NULL);

	n_node = n_node->next;
	}

	k->next = n_node->next;
	n_node->next = k;

	return (k);

}
