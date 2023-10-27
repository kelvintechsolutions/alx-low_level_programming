#include "main.h"

/**
 * _strcmp -it compares two strigs.
 * @s1:it is the first strig to compare.
 * @s2:it is the second strig to compare.
 * Return: less than 0 if s1 is less than s2 and 0 if they're equal,
 * more than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
