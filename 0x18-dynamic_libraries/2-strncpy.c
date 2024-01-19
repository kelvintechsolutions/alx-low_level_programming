#include "main.h"
/**
 * _strncpy -it copies a string.
 * @dest:it is the destination.
 * @src:it is the source.
 * @n:it is the amount of bytes from src.
 * Return:it is the the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
