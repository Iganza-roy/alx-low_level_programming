#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	if (h == NULL)
		return (0);
	for (n_nodes = 0; h != NULL; n_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_nodes);
}
