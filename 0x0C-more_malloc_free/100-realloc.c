#include "main.h"
#include <stdlib.h>

/**
 * _realloc -it will reallocate a memoy block using malloc.
 * @ptr: A pointer to the memoy that is previously allocated.
 * @old_size:it is the size in bytes of the allocated space for ptr.
 * @new_size:it is the size in bytes for the new memoy block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0(unsuccess) and ptr is not NULL - NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
