#include "lists.h"

/**
 * delete_nodeint_at_index -it deletes the node at the index of listint.
 * @head:it is the data type poiter the next node.
 * @index:it is the data type unsigned int index.
 * Return:it will return 1 if successful and -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp_node = *head;
	listint_t *idx_node;

	if (tmp_node && (!index))
	{
		*head = tmp_node->next;
		free(tmp_node);
		return (1);
	}
	while (tmp_node)
	{
		if (counter + 1 == index)
		{
			idx_node = tmp_node->next;
			if (idx_node)
			{
				tmp_node->next = idx_node->next;
				free(idx_node);
				return (1);
			}
		}
		tmp_node = tmp_node->next;
		counter++;
	}
	return (-1);
}
