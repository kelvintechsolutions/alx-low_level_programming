#include <stdio.h>
#include "main.h"

/**
 * _strcpy -it is the function copies strig pointed to src and dest.
 * @dest:it is the Poiter parameter
 * @src:it is the poiter parameter.
 * Return: success (char).
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
