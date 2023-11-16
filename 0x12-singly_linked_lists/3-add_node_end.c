#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the first element
 * @str: the list
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *new;
	unsigned int k, cnt = 0;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		cnt++;
	nnode->len = cnt;
	nnode->next = NULL;
	new = *head;

	if (new == NULL)
		*head = nnode;
	else
	{
		while (new->next != NULL)
			new = new->next;
		new->next = nnode;
	}
	return (*head);
}
