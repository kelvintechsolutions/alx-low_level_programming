#include "main.h"
#include <stdio.h>

/**
 * *_strstr -it locates a substrig.
 * @haystack:it is a  strig to search in.
 * @needle:it is a substrig to look after.
 *
 * Return:it is a  poiter to the beginning of the located substrig
 * or NULL if the( substrig is not foud)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
