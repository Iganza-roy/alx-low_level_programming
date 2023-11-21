#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first node
 * @index: index of the node, starting from 0
 * Return: null if nod does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; (k < index) && (head->next); k++)
		head = head->next;

	if (k < index)
		return (NULL);

	return (head);
}
