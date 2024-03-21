#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element or NULL
 * if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *h;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->nex;
		h->next = n_node;
	}
	else
	{
		*head = n_node;
	}
	n_node->prev = h;
	return (n_node);
}
