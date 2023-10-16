#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string.
 * Return: first integer found in string.
 */

int _atoi(char *s)
{
	int x;
	int h, p;

	h = 0;
	p = -1;
	for (i = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
			p *= -1;

		if (s[x] > 47 && s[x] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[x] - '0');
			else
				h = (s[x] - '0') * -1;

			if (s[x + 1] < 48 || s[x + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}
