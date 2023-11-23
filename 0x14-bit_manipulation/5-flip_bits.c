#include "main.h"

/**
 * flip_bits - it returns the number of bits  needed to be flipped.
 * @n:it is the type unsigned long int input poiter.
 * @m:it is the type unsigned long int position of unit.
 * Return:it will return flipped_bit.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or;
	unsigned int flip_bit;

	or = n ^ m;
	flip_bit = 0;
	while (or > 0)
	{
		if ((or & 1) != 0)
			flip_bit++;
		or = or >> 1;
	}
	return (flip_bit);
}
