#include "main.h"
/**
 * _memset -it fills a block of memoy with a specific value.
 * @s: it is the starting addresses of memoy to be filled.
 * @b: it is the desiredd value.
 * @n: it is the number of bytes to be changedd.
 *
 * Return: it is the changed array with new value for n byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}


