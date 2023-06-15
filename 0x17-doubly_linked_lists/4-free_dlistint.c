#include "lists.h"

/*
 * free_dlistint - Frees a doubly linked list of integers
 * @head: Pointer to the head node of the list
 *
 * Description: function frees all the nodes
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}