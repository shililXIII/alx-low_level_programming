#include "lists.h"

/**
 * free_listint - free linked list
 * @head: pointer to listint to be free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
