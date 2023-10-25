#include "lists.h"

/**
 * add_nodeint - add new node to intger
 * @head: pointer to frist node
 * @n: wt insert to new nodes
 * Return: new node or Null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (newn);
}
