#include "lists.h"

/**
 * print_dlistint - print all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int element = 0;

	if (h == NULL)
		return (element);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		element++;
		h = h->next;
	}

	return (element);
}
