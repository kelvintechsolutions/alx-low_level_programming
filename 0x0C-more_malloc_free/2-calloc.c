#include "main.h"

/**
* _calloc -it will allocate memoy using malloc and set it to zero.
*@nmemb:it is the nuber of elements.
*@size:it is the size of the memoy block.
*Return: poiter to the address of the memoy block.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int h;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (h = 0; h < (nmemb * size); h++)
			block[h] = 0;
		return (block);
	}
	else
		return (NULL);
}
