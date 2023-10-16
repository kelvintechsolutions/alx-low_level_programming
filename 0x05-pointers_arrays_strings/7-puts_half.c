#include "main.h"

/**
 * puts_half - print second half of the string.
 * @str: char array string type.
 */

void puts_half(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
		;

	b++;
	for (b /= 2; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
