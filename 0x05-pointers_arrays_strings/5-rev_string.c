#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: char array string type.
 */

void rev_string(char *s)
{
	int a, b, l;
	char t;

	for (a = 0; s[a] != '\0'; a++)
		;

	l = a;
	for (a--, b = 0; b < l / 2; a--, b++)
	{
		t = s[b];
		s[b] = s[a];
		s[a] = t;
	}
}
