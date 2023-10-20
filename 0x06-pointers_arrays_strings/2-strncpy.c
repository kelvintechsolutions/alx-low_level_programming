#include "main.h"

/**
* _strncpy – copies a string.
* @dest: it is the destination string.
* @src: it is the source string.
* @n: the number of bytes to copy.
*
* Return: poiter to the resulting string.
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
