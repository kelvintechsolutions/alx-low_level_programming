#include "main.h"

/**
 * _print_rev_recursion -it prins a strig in reversed.
 * @s:it is  string to print.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
