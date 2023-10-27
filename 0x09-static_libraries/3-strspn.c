#include "main.h"

/**
 * *_strspn -it gets the length of a prefix sub-strig.
 * @s:it is the strig to evaluate.
 * @accept:it is the strig containing the list of characters to match in s.
 * Return:it is the nuber of bytes in the initial segmeent.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
