#include "lists.h"

/**
 * print_listint -it prints all the elements of a list_int list.
 * @h:it is a data type poiter of struct.
 * Return:it will return the elements of the str index.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int index = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		index++;
	}
	return (index);
}
