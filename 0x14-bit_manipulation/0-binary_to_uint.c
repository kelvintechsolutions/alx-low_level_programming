#include "main.h"

/**
 * binary_to_uint -it converts a binary nuber into an unsigned int.
 * @b:it is the type const char poiter of one bit.
 * Return:it will return  converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
			return (0);
		dec <<= 1;
		if (*(b + n) == '1')
			dec ^= 1;
		n++;
	}
	return (dec);
}
