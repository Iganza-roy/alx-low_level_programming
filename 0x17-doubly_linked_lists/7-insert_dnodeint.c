#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: double pointer to list
 * @idx: index where node should be inserted
 * @n: data to new node
 * Return: a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *header;
	unsigned int x = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!*h || idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	header = *h;
	while (header && x < idx - 1)
	{
		header = header->next;
		x++;
	}

	if (!header || x > idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->prev = header;
	new->next = header->next;
	header->next = new;

	if (new->next)
		new->next->prev = new;

	return (new);
}
