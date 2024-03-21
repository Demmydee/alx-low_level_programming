#include "lists.h"

/**
 * dlistint_len - return the number of elements in
 * a linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int element = 0;

	if (h == NULL)
		return (element);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}

	return (element);
}
