#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index in list
 * @head: double pointer to list
 * @index: index node to be deleted
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *header = *head;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(header);
		return (1);
	}

	while (x < index)
	{
		if (header == NULL)
			return (-1);
		header = header->next;
		++x;
	}

	header->prev->next = header->next;

	if (header->next)
		header->next->prev = header->prev;
	free(header);

	return (1);
}
