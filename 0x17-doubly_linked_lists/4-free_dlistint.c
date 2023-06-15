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
	dlistint_t *tmp, *dump;

	dump = head;
	if (head != NULL)
	{
		while (dump != NULL)
		{
			tmp = dump;
			dump = dump->next;
			free(tmp);
		}
		free(dump);
	}
}
