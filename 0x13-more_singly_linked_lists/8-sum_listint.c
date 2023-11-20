#include "lists.h"

/**
 * sum_listint -it returns the sum of all data of a listint.
 * @head:it is a data type poiter the head node.
 * Return:it will return the sum of all nodes.
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp_node;
	int sum = 0;

	if (!head)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}
	return (sum);
}
