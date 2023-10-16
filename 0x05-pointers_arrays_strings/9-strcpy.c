#include "main.h"

/**
 * _strcpy - copies string.
 * @dest: pointer.
 * @src: pointer.
 * Return: success.
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		dest[a] = *(src + a);
	}
	dest[a] = '\0';

	return (dest);
}
