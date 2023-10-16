#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert.
 * Return: the integer.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int r = 0;
	int m = 1;
	int y = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			y = 1;
			r = (r * 10) + (s[c] - '0');
			c++;
		}

		if (y == 1)
		{
			break;
		}

		c++;
	}

	r *= m;
	return (r);
}
