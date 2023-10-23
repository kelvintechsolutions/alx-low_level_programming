#include "main.h"

/**
  * _memset -it Fills memoy with a constant byte.
  * @s: its the memoy area to fill in.
  * @b:its constant byte to fill in.
  * @n: its bytes of memoy area to fill.
  *
  * Return: The memoy area filled.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
