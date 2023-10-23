#include "main.h"
#include <stdio.h>

/**
 * *_strchr -it  locates a character in a strig
 * @s: it is a strig to search for.
 * @c: char to find.
 *
 * Return: a poiter to the first occurrence of the char.
 * c in the strig s, or NULL if the character is not found.
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
