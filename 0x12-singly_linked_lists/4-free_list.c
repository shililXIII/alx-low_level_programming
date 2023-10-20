#include "lists.h"
#include <stdlib.h>

/**
 * free_list - func to free list_t
 * @head: lit_t
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
