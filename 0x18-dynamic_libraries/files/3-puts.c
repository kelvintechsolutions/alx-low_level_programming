#include "main.h"

/**
 * _puts -it  prints a string, followed by a new line.
 * @str:it is the poiter to the string to print.
 * Return:it returns void.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
