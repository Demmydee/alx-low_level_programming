#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: The doubly linked list to be printed
 *
 * Return: The number of nodes of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
