#include "main.h"

/**
 * _strncpy -it copies a strig.
 * @dest:it is the destination strig.
 * @src:it is the source strig.
 * @n:it is the nuber of bytes to copy.
 * Return: poiter to the resulting strig.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

