#include "main.h"

/**
 * get_bit -it  returns the value of a bit in a given index.
 * @n:it is the type unsigned long int input.
 * @index:it is the type unsigned int position of unit.
 * Return:it will return the value of a bit in an index or -1 if occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
