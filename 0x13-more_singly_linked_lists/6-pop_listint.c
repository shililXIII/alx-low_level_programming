#include "lists.h"

/**
 * pop_listint - delete head of node
 * @head: pointer to frist node head
 * Return: data was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
