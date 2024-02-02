#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head:pointer to the first element
 * @str: node to be added
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int k, cnt = 0;

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		cnt++;
	nnode->len = cnt;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
