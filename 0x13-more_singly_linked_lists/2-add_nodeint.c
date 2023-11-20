#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the first node
 * @n: counter
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;


	n_node = malloc(sizeof(listint_t));
	if (n_node != NULL)
	{
		n_node->n = n;
		n_node->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		n_node->next = *head;
	*head = n_node;

	return (n_node);
}
