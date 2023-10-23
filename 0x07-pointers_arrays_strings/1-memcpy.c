#include "main.h"
/**
* char *_memcpy - it copies n bytes from memoy area source to memoy area destination.
* @dest: destination.
* @src: source.
* @n: nuber of bytes.
* Return: poiter to destination.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}

	return (dest);
}
