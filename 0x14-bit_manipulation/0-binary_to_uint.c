#include "main.h"

/**
* binary_to_uint -it converts a binary nuber to unsigned int.
* @b:it is the strig containing the binary nuber.
*
* Return:it will return the converted nuber.
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
