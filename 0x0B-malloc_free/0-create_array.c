#include <stdlib.h>
#include "main.h"

/**
* *create_array -it creates a array of characters,
* and initializes it with a specific character.
* @size:it is the size of the array to create.
* @c:it is the  character to initialize the array c.
* Return: pointer to the array (Successuful), NULL (unsuccessful).
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
