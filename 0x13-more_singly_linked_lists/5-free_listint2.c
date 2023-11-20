#include "lists.h"

/**
 * free_listint2 -it is the freee a `listint_t` list.
 * @head:it is the double poiter to head.
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}
