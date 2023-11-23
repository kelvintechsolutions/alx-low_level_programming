#include<stdio.h>
#include "main.h"

/**
 * binary_to_uint -it converts a binary nuber to an unsigned int.
 * @b:it is the poiter to a strig of 0 and 1 chars.
 *
 * Return:it will return the  converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
