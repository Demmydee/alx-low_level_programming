#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
