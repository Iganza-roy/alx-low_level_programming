#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *n_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		n_node = *head;
		*head = (*head)->next;
		free(n_node);
	}
	head = NULL;
}
