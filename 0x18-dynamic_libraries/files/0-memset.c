#include "main.h"
/**
 * _memset -it fills memory with a constant byte.
 * @s:it is the memory area.
 * @b:it is the constant byte.
 * @n:it is the bytes filled.
 * Return:it is the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
