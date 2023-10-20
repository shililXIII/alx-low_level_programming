#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - it's to add node to list.
 * @head: za base of func
 * @str: string
 * Return: list of new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
