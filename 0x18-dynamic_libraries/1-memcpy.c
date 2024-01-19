#include "main.h"
/**
 * _memcpy -it copies memory area,
 * @dest:it is the destination memory area.
 * @src:it is the source memory area.
 * @n:it is the bytes filled.
 * Return:it is  the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
