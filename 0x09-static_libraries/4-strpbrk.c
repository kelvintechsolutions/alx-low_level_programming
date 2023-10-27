#include "main.h"
#define NULL 0

/**
* _strpbrk -it returns a poiter to byte in s that matches a byte in acceptance.
* @s:it is a strig to search.
* @accept:it is the target matches.
* Return:it is a  poiter to index of strig at first occurrence.
*/

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}

		}

	x++;
	}

	return (NULL);

}
