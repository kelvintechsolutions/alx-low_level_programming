#include "main.h"

/**
  * _strspn - it search a strig for a set of bytes.
  * @s: it source strig.
  * @accept: it accepted strig.
  *
  * Return: nuber of bytes in the init segmet
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
