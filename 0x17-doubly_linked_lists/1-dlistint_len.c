#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Counts the number of nodes in a doubly linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
