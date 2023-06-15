#include "lists.h"

/**
 * sum_dlistint - computes the sum of elements in a doubly linked list
 * @head: pointer to the head of the linked list
 *
 * Return: sum of elements in the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
