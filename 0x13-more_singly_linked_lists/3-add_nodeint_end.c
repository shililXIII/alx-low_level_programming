#include "lists.h"

/**
 * add_nodeint_end - add node intger end
 * @head: pointer to node in list_t
 * @n: new element
 * Return: end of node or Null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *tmp = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newn;

	return (newn);
}
