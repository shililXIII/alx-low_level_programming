#include "lists.h"

/**
 * listint_len - print a list of lenght
 * @h: linked to listint_t
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
