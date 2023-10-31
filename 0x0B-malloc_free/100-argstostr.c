#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr -it  concatenates all arguments of your prongram with newline.
 * @ac:it is the argument count.
 * @av:it is the double poiter to array of strigs passed to main.
 * Return: Null if (fail), else returm (poiter to new strig).
 */

char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retp);
}
