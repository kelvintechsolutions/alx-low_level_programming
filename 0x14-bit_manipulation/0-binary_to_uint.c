#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint -it converts a binary nuber to an unsigned int.
  * @b:it is the binary string to converts.
  * Return:it will return positive nuber converted from a binary.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}

	return (sum);
}

/**
  * _strlen -it returns the length of a strig.
  * @s:it is the string to count.
  * Return:it will return the  string length.
  */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
