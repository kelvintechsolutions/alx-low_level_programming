#include "main.h"

/**
  * _strpbrk -it  search a strig for any of a set of bytes.
  * @s: it source strig.
  * @accept: it accepted characters.
  * Return: it is the strig since the first found accepted character.
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
