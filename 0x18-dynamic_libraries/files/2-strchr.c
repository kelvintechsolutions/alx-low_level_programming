#include "main.h"
/**
 * _strchr -it locates a character in a string.
 * @s:it is the string.
 * @c:it is the character.
 * Return:it is  the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
