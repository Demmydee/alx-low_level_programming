#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index of the node in the doubly linked list
  *
  * Return: A specified node of the doubly linked list or null 
  * if node does not exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int round = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (round == index)
				return (current);

			current = current->next;
			++round;
		}
	}

	return (NULL);
}
