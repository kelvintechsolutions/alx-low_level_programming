#include "lists.h"

/**
 * get_nodeint_at_index -it will return the nth node of a listint_t linked list.
 * @head:it is the data-type poiter the head node.
 * @index:it is the data type unsigned int index.
 * Return:it will return the head node data n.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node = head;
	unsigned int counter = 0;

	for (; tmp_node && counter < index; counter++)
	{
		tmp_node = tmp_node->next;
	}
	return (tmp_node);
}
