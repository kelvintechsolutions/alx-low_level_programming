#include "main.h"

/**
 * *_strcat -it is a function commute srtings.
 * @dest:it is a param poiter to a char.
 * @src:it is a param poiter to a char.
 * Return:it returns the value of dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
