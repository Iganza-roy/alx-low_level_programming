#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 * Return: address of the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *r;
	listint_t *k;

	r = NULL;
	k = NULL;

	while (head != NULL)
	{
		k = (*head)->next;
		r = (*head)->next;
		r = *head;
		*head = k;
	}
	*head = r;
	return (*head);
}
