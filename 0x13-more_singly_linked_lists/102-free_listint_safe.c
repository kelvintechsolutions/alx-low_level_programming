#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count -it counts the nuber of unique nodes
 *                      in a looped listint_t linked.
 * @head:it is a poiter to the head of the listint_t to check.
 * Return: If the list is not-looped - 0(success).
 *         Otherwise - the nuber of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tiger, *lion;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tiger = head->next;
	lion = (head->next)->next;

	while (lion)
	{
		if (tiger == lion)
		{
			tiger = head;
			while (tiger != lion)
			{
				nodes++;
				tiger = tiger->next;
				lion = lion->next;
			}

			tiger = tiger->next;
			while (tiger != lion)
			{
				nodes++;
				tiger = tiger->next;
			}

			return (nodes);
		}

		tiger = tiger->next;
		lion = (lion->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe -it frees a listint_t list safely.
 * @h:it is a poiter to the adress of
 *     the head of the listint_t list.
 * Return:it will return the size of the list that was freed.
 * Description:it is the function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
