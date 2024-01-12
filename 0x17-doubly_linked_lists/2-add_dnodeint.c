#include "lists.h"

/**
 * add_dnodeint -it will add a anode at the beginning of a dlistint list.
 * @head:it is the type dpointer of node
 * @n:it is the type int sttruct list is number
 * Return:it is the address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
