#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -it  multiples 2 nubers.
 * @argc:it is the argumet count.
 * @argv:it is the argumet vector.
 * Return: 1 if unsuccessful, 0 if function is successful.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
