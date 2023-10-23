#include "main.h"

/**
  * _strstr - it locates a substrig.
  * @haystack: it is the strig to search.
  * @needle: it is the strig to find.
  *
  * Return: char value.
  */
char *_strstr(char *haystack, char *needle)
{
	int c = 0, d = 0;

	while (haystack[c])
	{
		while (needle[d])
		{
			if (haystack[c + d] != needle[d])
			{
				break;
			}

			d++;
		}

		if (needle[d] == '\0')
		{
			return (haystack + c);
		}

		c++;
	}

	return ('\0');
}
