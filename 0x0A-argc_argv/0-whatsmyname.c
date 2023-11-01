#include "main.h"
#include <stdio.h>

/**
 * main -it prints the name of the file.
 * @argc:it is the argumet count.
 * @argv:it is the argumets passed.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
