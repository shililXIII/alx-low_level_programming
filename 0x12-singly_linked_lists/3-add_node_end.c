#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - to print end of node
 * @head: it,s node to printed
 * @str: string
 * Return: end of node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;

	return (node);
}
