#include "main.h"
/**
* char *_memcpy -it copies n bytes from memoy area src to memoy area dest.
* @dest:it is the  destination.
* @src:it is the source.
* @n:it is the nuber of bytes.
* Return:it is the poiter to destination.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}

	return (dest);
}
