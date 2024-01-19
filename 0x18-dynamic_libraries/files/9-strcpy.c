#include "main.h"
#include <stdio.h>
/**
 * _strcpy -it copies the string poited to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest:it is the destination.
 * @src:it is the source.
 * Return:it returns to the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
