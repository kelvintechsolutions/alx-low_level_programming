#include "main.h"
#include <stdio.h>

/**
* *_strchr -it locates a character in a strig.
* @s:it is the strig to search.
* @c:it is the char to find in.
* Return: it returns a pointer to the first occurrence of the character.
*/
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
