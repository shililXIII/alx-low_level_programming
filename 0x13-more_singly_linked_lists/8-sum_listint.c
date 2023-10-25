#include "lists.h"

/**
 * sum_listint - to sum all listint_t
 * @head: pointer
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		sum = tmp->next;
	}

	return (sum);
}
