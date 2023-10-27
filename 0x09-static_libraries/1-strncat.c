#include "main.h"

/**
* _strncat -it concatenates n bytes from a strig to anotherstrig.
* @dest:it is the dest strig.
* @src:it is the source strig.
* @n:it is the nuber of bytes of str to concatenate.
* Return: 0(successful).
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
