#include "lists.h"
#include <stdio.h>

/**
 * listint_len -it is the function that returns the nuber of elements.
 * @h:it is a poiter to listint_t structure.
 * Return:it will return the nuber of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
