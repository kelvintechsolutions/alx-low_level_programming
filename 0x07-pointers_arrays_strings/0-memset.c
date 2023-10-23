#include "main.h"

/**
 * *_memset -it  fills memoy with a byte.
 * @s: memoy area to be filled.
 * @b: it is the char to copy.
 * @n: the nuber of times to copy b.
 *
 * Return: poiter to the memoy area s
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
