#include "lists.h"

/**
 * getnodeint_at_index - returns the nth node of a list
 * @head: pointer to the first node
 * @index: index of the node, starting from 0
 * Return: null if nod does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
