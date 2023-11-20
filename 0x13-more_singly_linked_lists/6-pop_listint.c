#include "lists.h"

/**
 * pop_listint -it will delete the head node of a listint_t.
 * @head:it is the data type poiter the head node.
 * Return:it will return head node data n.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	unsigned int ret_value;

	if (*head == NULL)
		return (0);

	node = *head;
	ret_value = node->n;
	*head = node->next;
	free(node);

	return (ret_value);
}
