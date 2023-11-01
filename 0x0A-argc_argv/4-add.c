#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -it  adds 2 positive nubers and also priint the result.
 * @argc:it is the  argumet count.
 * @argv:it is the argumet vector, array of strigs.
 * Return: 1 if error, 0 if fuction runs properly.
 */

int main(int argc, char *argv[])
{
	int total, h;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (h = 1; argv[h]; h++)
		{
			num = strtol(argv[h], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
