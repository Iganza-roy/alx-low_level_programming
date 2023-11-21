#include "lists.h"

/**
 * pop_listint - deletes the head of a node of a list
 * @head: pointer to the first node
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *n_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	n_node = *head;
	*head = (*head)->next;
	free(n_node);
	return (n);
}
