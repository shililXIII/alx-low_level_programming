#include "lists.h"

/**
 * get_nodeint_at_index - get node intger at indec
 * @head: pointer to the frist node head
 * @index: index of node
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
