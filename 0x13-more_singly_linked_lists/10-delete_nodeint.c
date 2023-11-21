#include "lists.h"

/**
 * delete_nodeint_at_index - delets the node at index
 * @head: pointerto the first node
 * @index: index of the node that should be deleted
 * Return: 1 on success else, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_node, *cp = *head;
	unsigned int nd;

	if (cp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}

	for (nd = 0; nd < (index - 1); nd++)
	{
		if (cp->next == NULL)
			return (-1);

		cp = cp->next;
	}
	n_node = cp->next;
	cp->next = n_node->next;
	free(n_node);
	return (1);
}
