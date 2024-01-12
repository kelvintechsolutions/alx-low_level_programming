/*
 * File: 0-print_dlistint.c
  */

#include "lists.h"

/**
 * print_dlistint -it will prints all the elements of a dlistint_t list.
 * @h:it is the head of the dlistint_t list
 * Return:it will retun the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
