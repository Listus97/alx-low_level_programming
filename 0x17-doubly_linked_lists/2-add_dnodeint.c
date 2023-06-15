#include "lists.h"
#include <string.h>

/**
 * *add_dnodeint - Adds a node to the beginning of a doubly linked list
 * @head: Pointer to the head of the linked list
 * @n: Integer element to be added to the list
 *
 * Return: The number of elements in the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
