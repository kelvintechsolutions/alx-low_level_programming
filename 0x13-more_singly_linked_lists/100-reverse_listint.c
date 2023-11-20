#include "lists.h"

/**
 * reverse_listint -it is a function that reverses listint.
 * @head:it is the data type double poiter the next node.
 *
 * Return:it will return  new_node if successful.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *post_node;

	while (head && *head)
	{
		post_node = (*head)->next;
		(*head)->next = old_node;
		old_node = *head;
		*head = post_node;
	}
	*head = old_node;
	return (*head);
}
