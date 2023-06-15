#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_b4_del = *head, *node_to_del, *node_af_del;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(node_b4_del);
		return (1);
	}
	while (i < index)
	{
		if (node_b4_del == NULL)
			return (-1);
		node_b4_del = node_b4_del->next;
		i += 1;
	}
	if (node_b4_del == NULL || node_b4_del->next == NULL)
		return (-1);
	node_to_del = node_b4_del->next;
	node_af_del = node_to_del->next;
	if (node_af_del != NULL)
		node_af_del->prev = node_b4_del;
	node_b4_del->next = node_af_del;
	free(node_to_del);
	return (1);
}
