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
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
