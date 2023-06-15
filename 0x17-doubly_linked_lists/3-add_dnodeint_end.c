#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: pointer to the head of the doubly linked list
 * @n: value for the new node
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
    new_node->prev = current;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
