#include "main.h"

/**
 * malloc_checked -it will  allocate memoy using malloc.
 * @b:it is the  size of the memoy block to be allocatedd.
 * Return:it is the pointer to the address of the memoy block.
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
