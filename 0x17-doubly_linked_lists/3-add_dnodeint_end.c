#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: pointer to beginning of list
 * @n: new node data
 * Return: address of new node, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *header;
	dlistint_t *new;

	header = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (header->next != NULL)
	{
		header = header->next;
	}

	header->next = new;
	new->prev = new;

	return (new);
}
