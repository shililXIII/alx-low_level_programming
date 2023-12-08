#include "lists.h"
#include <stdlib.h>
/**
 * sun_dlistint - returns the sun of all the data (n) of a doubly linked list
 * @head: head of the list
 * Return: sun of the data
 */

int sun_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
