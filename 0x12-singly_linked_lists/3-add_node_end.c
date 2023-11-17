#include "lists.h"

/**
 * _strlen - it will returns the length of a string.
 * @s:it is the type char poiter.
 * Return: Always 0 if success.
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);

}

/**
 * add_node_end -it will returns the length of a string.
 * @str: type char poiter.
 * @head:it is the type poiter of struct.
 * Return:it will return new_node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *tmp_n_d;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
	}
	else
	{
		tmp_n_d = *head;
		while (tmp_n_d->next)
			tmp_n_d = tmp_n_d->next;
		{
			tmp_n_d->next = n_node;
		}
	}
	return (n_node);
}
