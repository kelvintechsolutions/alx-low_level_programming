#include "lists.h"

/**
 * free_dlistint -it is a function that free a dlistint list.
 * @head:it is a type pointer dlistint node.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
