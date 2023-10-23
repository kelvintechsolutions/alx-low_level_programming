#include "main.h"
/**
 *_memset -   it fills memoy with a constant byte.
 *@s: poiter block of memoy to fill.
 *@b: value too set.
 *@n: bytes of the memoy.
 *Return: destination.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;

	}

	return (s);
}
