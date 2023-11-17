#include "lists.h"

/**
 * free_list - it is the free a list_t list.
 * @head:it is the type poiter struct list_t.
 * Return:it is the free head.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
