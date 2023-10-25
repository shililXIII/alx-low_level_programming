#include "lists.h"

/**
 * *insert_nodeint_at_index - insert node int at index
 * @head: pointer to list t
 * @idx: index
 * @n: num of index
 * Return: val in index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *newn;
	listint_t *tmp = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn || !head)
		return (NULL);
	newn->n = n;
	newn->next = NULL;
	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}
	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newn->next = tmp->next;
			tmp->next = newn;
			return (newn);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
