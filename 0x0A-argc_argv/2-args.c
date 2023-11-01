#include "main.h"
#include <stdio.h>

/**
 * main -it prints all argumets.
 * @argc:it is the argumet count.
 * @argv:it is the argument vector.
 * Return: 0(successful).
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
