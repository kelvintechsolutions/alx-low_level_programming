#include "lists.h"

/**
 * add_dnodeint_end -it adds a new node at the end of a
 * dlistint_t list.
 * @head:it is a type dpointer of node
 * @n:it is a type int struct list is number
 * Return:it is an &address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	end_node = *head;
	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = new_node;
	new_node->prev = end_node;
	return (new_node);
}
