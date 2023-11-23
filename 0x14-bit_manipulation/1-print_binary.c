#include "main.h"

/**
 * _right_pbin_mask -it is the recursion function to print bit 0.
 * @n:it is the type const unsigned long int.
 */

void _right_pbin_mask(unsigned long int n)
{
	if (n == 0)
		return;
	_right_pbin_mask(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary -it prints the binary rep of a nuber.
 * @n:it is the type const unsigned long int.
 * Return:it will return the binary nuber.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_right_pbin_mask(n);
}
