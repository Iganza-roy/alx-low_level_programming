#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer to thefirst node
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n_emts;

	if (h == NULL)
		return (0);
	for (n_emts = 0; h != NULL; n_emts++)
		h = h->next;
	return (n_emts);
}
