#include "main.h"

/**
 * *_memset -it fills memoy with a constant byte.
 * @s:it is the memoy area to be filled.
 * @b:it is the char to copy.
 * @n: it is the nuber of times to copy b.
 * Return: pointer to the memoy area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
