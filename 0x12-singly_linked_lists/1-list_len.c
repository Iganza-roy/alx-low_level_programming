#include "lists.h"

/**
 * list_len - returns number of elements
 * h: element
 * Return: length of the node
 */

size_t list_len(const list_t *h)
{
	size_t nd = 0;

	while (h != NULL)
	{
		h = h->next;
		nd++;
	}
	return (nd);
}
