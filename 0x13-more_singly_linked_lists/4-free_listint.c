#include "lists.h"

/**
 * free_listint -this is the free a `listint_t` list.
 *
 *
 * @head:it is the head of linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
