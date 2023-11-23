#include "main.h"

/**
 * set_bit -it sets the value of a bit to 1 at a given index.
 * @n:it is the type unsigned long int input poiter.
 * @index:it is the type unsigned int position of unit.
 * Return:it will return 1 if successful -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
