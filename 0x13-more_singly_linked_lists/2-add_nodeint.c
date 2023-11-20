#include "lists.h"

/**
 * add_nodeint -it adds a node at the beginnng of a listint_t.
 * @n:it is the data type poiter of struct.
 * @head:it is the data type poiter of the next node.
 * Return:it will return the elements of the str new_node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
