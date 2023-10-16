#include "main.h"

/**
 * puts2 - print one char out of 2 of the string.
 * @str: char array string type.
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}
