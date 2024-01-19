#include "main.h"
/**
 * _strncat -it concatenates two strings.
 * @dest:it is the destination.
 * @src:it is the source.
 * @n:it is the amount of bytes used from src.
 * Return:it is  the poiter to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
