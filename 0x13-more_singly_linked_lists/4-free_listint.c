#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *nnode;

	while ((nnode = head) != NULL)
	{
		head = head->next;
		free(nnode);
	}
}
