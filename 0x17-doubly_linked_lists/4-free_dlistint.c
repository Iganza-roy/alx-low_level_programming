#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: first node of list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *header = head;
	dlistint_t *next;

	while (header != NULL)
	{
		next = header->next;
		free(header);
		header = next;
	}
}
