/*
 * File: 1-dlistint_len.c
 * 
 */

#include "lists.h"

/**
 * dlistint_len -it counts the number of elements in a linked dlistint_t list.
 * @h:it is the head of the dlistint_t list.
 * Return:it is the nuber of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
