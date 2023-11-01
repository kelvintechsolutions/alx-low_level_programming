#include "main.h"
#include <stdio.h>

/**
 * main - print the nuber of args .
 * @argc:it is the argumet count.
 * @argv:it is the argumet vector.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
