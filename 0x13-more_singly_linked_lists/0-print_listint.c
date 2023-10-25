#include "lists.h"

/**
 * print_listint - print all elements
 * @h: linked list of listint
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
	printf("%d\n", h->n);
	n++;
	h = h->next;
	}

	return (n);
}
