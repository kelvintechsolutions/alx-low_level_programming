#include "main.h"

/**
* leet -it encodes a string in 1337.
* @s: string to be encoded.
*
* Return: the resulting string.
*/
char *leet(char *s)
{
	int i, j;

	char *c = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
