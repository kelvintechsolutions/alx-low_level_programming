

#include "main.h"
#define NULL 0

/**
* _strchr -it locates frist occurrence of char in strig and returns poiter.
* @s:it is the strig to search.
* @c:it is the target character.
* Return:it is the poiter to that character in strig.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);
}

