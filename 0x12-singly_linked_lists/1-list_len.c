#include "lists.h"

/**
 * list_len -it will return the nuber of elements in a linked list
 * @h:it is the  data type poiter of struct.
 * Return:it will return the elements of the str i.
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t node = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		node++;
	}
	return (node);
}
